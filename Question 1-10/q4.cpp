#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool canBeSplit(vector<int>& arr) {
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < arr.size() - 1; i++) {
        leftSum += arr[i];
        int rightSum = totalSum - leftSum;

        if (leftSum == rightSum) {
            cout << "Split index: " << i << endl;
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 3};
    
    if (canBeSplit(arr))
        cout << "Array can be split with equal sum" << endl;
    else
        cout << "Array cannot be split with equal sum" << endl;

    return 0;
}
