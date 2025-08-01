#include<bits/stdc++.h>
using namespace std;

void MergeArray(vector<int>&arr,int l,int mid,int r){
    int n1 = mid - l + 1; // Left subarray ka size
    int n2 = r - mid;     // Right subarray ka size

    vector<int> left(n1);  // Left subarray banaya
    vector<int> right(n2); // Right subarray banaya

    for(int i = 0; i<n1; i++){
        left[i] = arr[l + i]; // Left subarray mein elements copy kiye
    }
    for(int i = 0; i<n2; i++){
        right[i] = arr[mid + 1 + i]; // Right subarray mein elements copy kiye
    }

    int i = 0, j = 0, k = l;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++]; // Agar left wala element chhota hai toh usse original array mein daalo
        } else {
            arr[k++] = right[j++]; // Agar right wala element chhota hai toh usse original array mein daalo
        }
    }

    while(i<n1){
        arr[k++] = left[i++]; // Left subarray ke bache hue elements copy karo
    }
    while(j<n2){
        arr[k++] = right[j++]; // Right subarray ke bache hue elements copy karo
    }
}

void MergeSort(vector<int>&arr,int l,int r){
    if(l == r) return; // Base case: agar ek ya zero elements hai toh already sorted hai

    int mid = l + (r - l) / 2; // Middle index nikalo taaki array ko do parts mein divide karein
    MergeSort(arr, l, mid);       // Pehle half ko recursively sort karo
    MergeSort(arr, mid + 1, r);   // Dusre half ko recursively sort karo

    MergeArray(arr, l, mid, r); // Dono sorted halves ko merge karo
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Array ke elements input lo
    }
    MergeSort(arr, 0, n - 1); // Merge sort call karo
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Sorted array print karo
    }
}
