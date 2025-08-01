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

    int st=0 ,end=n-1;
    while(st<end){
        if(arr[st]+arr[end]==target){
            cout<<"Found: "<<st<<" "<<end;
            return 0;
        }else if(arr[st]+arr[end] < target){
            st++;
        }else{
            end--;
        }
    }
    cout<<"Target sum is not found"<<endl;
    return 0;
}
