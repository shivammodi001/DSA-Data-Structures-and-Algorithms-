// C++ Program to find the maximum amount of water
// by iterating over all possible boundaries

#include <vector>
#include <iostream>
using namespace std;

int maxWater(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int res = 0;

        while (left < right) {
            int Height = min(height[left], height[right]);
            int Width = right - left;
            int Amount = Height * Width;
            res = max(res, Amount);

            // agr left pilar chota h toh move right side to maximize the amount
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return res;
    }

int main() {
    vector<int> arr = {2, 1, 8, 6, 4, 6, 5, 5};
    cout << maxWater(arr);
}