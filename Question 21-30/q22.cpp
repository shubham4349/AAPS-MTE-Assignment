#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    return n>0 && (n&(n-1))==0;
}
int main() {
    int n=16;
    if (isPowerOfTwo(n)) {
        cout<<n<<" is a power of two."<< endl;
    } else {
        cout<<n<<" is not a power of two."<<endl;
    }
    return 0;
}
//time complexity: O(1)
//space complexity: O(1)


// class Solution {
    // public:
    //     bool isPowerOfTwo(int n) {
    //         if (n <= 0) return false;
            
    //         while (n % 2 == 0) {
    //             n /= 2; // last me 2/2 hoga jo ki n ko 1 krdega
    //         }
            
    //         return n == 1; // mtlb agar vo number jo ki power of 2 hota to while loop me iterate hote hote last   me uski value 1 howegi, agar nhi hui to it's not power of 2.
    //     }
    // };
    
     
