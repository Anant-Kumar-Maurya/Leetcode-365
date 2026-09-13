// LeetCode 9 - Palindrome Number
// Difficulty: Easy
// Topic: Math
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

#include<iostream>
using namespace std;

class Solution
{
    public:
    bool isPalindrome(int x)
    {
        if(x < 0)
        {
            return false;
        }

        int original = x;
        int rev = 0;

        while(x > 0)
        {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }

        if(rev == original)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution s;

    int x = 121;

    bool result = s.isPalindrome(x);

    cout<<"Original number: "<<x<<endl;

    if(result)
    {
        cout<<"Palindrome: Yes"<<endl;
    }
    else
    {
        cout<<"Palindrome: No"<<endl;
    }

    return 0;
}