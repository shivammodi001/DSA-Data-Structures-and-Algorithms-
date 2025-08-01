#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
  
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter sum: ";
    cin >> target;

    vector<int> ans; 
    int found =0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == target){
                ans.push_back(i+1); // +1 for 1-based indexing
                ans.push_back(j+1);  // +1 for 1-based indexing
                found=1;
                break;
            }
            if(sum > target) break;
        }
        if(found)break;
    }

    if(ans.empty()) {
        cout << "No subarray found with the given sum." << endl;
    } else {
        cout << "Subarrays with the given sum:" << endl;
        for(int i = 0; i < ans.size(); i += 2){
            cout << "From index " << ans[i] << " to " << ans[i+1] << endl;
        }
    }

    return 0;
}
