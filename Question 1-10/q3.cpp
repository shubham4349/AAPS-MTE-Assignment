// equilibrium index= If at any idx i
// sum of elements from 0 to i-1 = sum of elements from i+1 to n-1
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int leftSum=0;

    for(int i=0;i<n;i++){
        if(leftSum==sum-leftSum-a[i]){
            cout<<i<<endl;
            return 0;
        }
        leftSum+=a[i];
    }
    cout<<-1<<endl;
    return 0;
}
//time complexity: O(n)
//space complexity: O(n)