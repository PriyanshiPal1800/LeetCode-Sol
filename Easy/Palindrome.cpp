/*
Given an integer x, return true if x is a palindrome, and false otherwise.

121 is true 
-1001 is false

*/

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int len=str.size();
        for (int i=0;i<len/2;i++) 
        {
            if(str[i]!=str[len-(i+1)])
               return 0;
        }
    return 1;
    }
};
