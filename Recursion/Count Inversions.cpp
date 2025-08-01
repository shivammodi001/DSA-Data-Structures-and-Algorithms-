#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------
// Brute Force: O(N^2)
// ---------------------------------------
long long inversionCountBruteForce(long long arr[], long long N) {
    long long count = 0;
    for (long long i = 0; i < N; i++) {
        for (long long j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

// ---------------------------------------
// Optimized: Merge Sort Approach (O(N log N))
// ---------------------------------------
long long mergeAndCount(long long arr[], long long temp[], int left, int mid, int right) {
    long long inv_count = 0;
    int i = left;     // Starting index of left subarray
    int j = mid + 1;  // Starting index of right subarray
    int k = left;     // Starting index for merged array

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); // All remaining elements in left[] are greater
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

long long mergeSortAndCount(long long arr[], long long temp[], int left, int right) {
    long long inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;

        inv_count += mergeSortAndCount(arr, temp, left, mid);
        inv_count += mergeSortAndCount(arr, temp, mid + 1, right);
        inv_count += mergeAndCount(arr, temp, left, mid, right);
    }
    return inv_count;
}

long long inversionCountOptimized(long long arr[], long long N) {
    long long temp[N];
    return mergeSortAndCount(arr, temp, 0, N - 1);
}

// ---------------------------------------
// Main Function
// ---------------------------------------
int main() {
    long long N;
    cin >> N;
    long long arr[N];
    for (long long i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Uncomment any one method below to use:
    // cout << inversionCountBruteForce(arr, N) << endl;
    cout << inversionCountOptimized(arr, N) << endl;

    return 0;
}
