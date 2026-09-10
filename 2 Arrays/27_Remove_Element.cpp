// LeetCode 27 - Remove Element
// Difficulty: Easy
// Topic: Array, Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)


#include<iostream>
#include<vector>
using namespace std;


class Solution
{
    public:
    int removeElement(vector<int>& nums, int val)
    {
        int k = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};


int main()
{
    Solution s;

    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int k = s.removeElement(nums, val);

    cout << "Number of elements: " << k << endl;

    cout << "Array after removing " << val << ": ";

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}