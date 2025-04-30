// class Solution {
//     public:
//         int maxProduct(vector<int>& nums) {
            
//             int maxPro=nums[0] ;
    
//            int n = nums.size();
//             for(int i =0; i<n; i++){
    
//                 int subarrPro = 1;
//                 for(int j = i; j<n; j++){
//                       subarrPro *=nums[j];
//                       maxPro = max(maxPro, subarrPro);
//                 }
//             }
//             return maxPro;
//         }
//     };


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int maxProduct(vector<int>& nums) {
//     if (nums.empty()) return 0;
    
//     int max_so_far = nums[0], min_so_far = nums[0], result = nums[0];
    
//     for (int i = 1; i < nums.size(); i++) {
//         if (nums[i] < 0) swap(max_so_far, min_so_far);
        
//         max_so_far = max(nums[i], max_so_far * nums[i]);
//         min_so_far = min(nums[i], min_so_far * nums[i]);
        
//         result = max(result, max_so_far);
//     }
    
//     return result;
// }

// int main() {
//     vector<int> nums = {2, 3, -2, 4};
//     cout << "Maximum Product Subarray: " << maxProduct(nums) << endl;
//     return 0;
// }
// //time complexity: O(n)
// //space complexity: O(1)