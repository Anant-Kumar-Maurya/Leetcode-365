// LeetCode 7 - Reverse Integer
// Difficulty: Medium
// Topic: Math
// Time Complexity: O(log10(n))
// Space Complexity: O(1)


#include<iostream>
#include<climits>
using namespace std;


class Solution
{
    public:
    int reverse(int x)
    {
        int rev = 0;

        while(x != 0)
        {
            int digit = x % 10;

            if(rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;

            if(rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
            x /= 10;
        }

        return rev;
    }
};


int main()
{
    Solution s;

    int x = 123;

    int result = s.reverse(x);

    cout<<"Original number: "<<x<<endl;
    cout<<"Reversed number: "<<result<<endl;

    return 0;
}