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
    cout << "Enter target difference: ";
    cin >> target;

    int st = 0, end = 1;
    while (st < n && end < n) {
        if (st == end) {
            end++;
            continue;
        }
        int diff = arr[end] - arr[st];
        if (diff == target) {
            cout << "Found: " << st << " " << end << endl;
            return 0;
        } else if (diff < target) {
            end++;
        } else {
            st++;
        }
    }

    cout << "Target difference not found" << endl;
    return 0;
}
