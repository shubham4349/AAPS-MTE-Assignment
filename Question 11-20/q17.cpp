#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;
    
    vector<int> left_max(n), right_max(n);
    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }
    
    right_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(right_max[i + 1], height[i]);
    }
    
    int water = 0;
    for (int i = 0; i < n; i++) {
        water += min(left_max[i], right_max[i]) - height[i];
    }
    
    return water;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(height) << endl;
    return 0;
}
//time complexity: O(n), space complexity: O(n)
// The code calculates the amount of water that can be trapped after raining given an array of heights.