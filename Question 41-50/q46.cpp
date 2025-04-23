#include<iostream>
#include<string>
using namespace std;
string longestPalindrome(string s) {
    if (s.empty()) return "";
    int start = 0, maxLength = 1;
    for (int i = 0; i < s.size(); i++) {
        int left = i, right = i;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
        left = i, right = i + 1;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }
    return s.substr(start, maxLength);
}
int main() {
    string s;
    cin >> s;
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
//time complexity: O(n^2), space complexity: O(1)
// This code finds the longest palindromic substring in a given string using a center expansion method.