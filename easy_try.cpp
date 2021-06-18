// NOT TO BE COMPILED AND RAN. ONLY TO HELP WITH UNDERSTANDING THE LEETCODE PROBLEMS

#include <iostream>
#include "Objects/box.h"
#include <string>
using namespace std;

// Leetcode Problem -Easy- Reverse Integer
class ReverseIntegerSolution001 
{
public:
    int reverse(int x) 
    {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};


// Leetcode Problem -Easy- Two Sums -Bruteforce Example
class TwoSumsSolution001
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ret;
        int size = nums.size();
        for(int i = 0; i < size - 1; i++) 
        {
            for(int j = i+1; j < size; j++) 
            {
                if(nums[0] + nums[1] == target) 
                {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
    }
};


// Leetcode Problem -Easy- Two Sums -Maps Example
class TwoSumsSolution002 
{
public:
     vector<int> twoSum(vector<int>& nums, int target) 
     {
        vector<int> ret;
        int size = nums.size();
        int diff;
        unordered_map<int, int>m;
        for(int i = 0; i< size; i++)
        {
            diff = target - nums[i];
            if(m.find(diff) != m.end() && m.find(diff)->second != i) 
            {
                ret.push_back(i);
                ret.push_back(m.find(diff)->second);
                return ret;
            }
            m[nums[i]] = i;
        }
        return ret;
    }
};

    
// Leetcode Problem -Easy- Remove Duplicates From Sorted Array
class RemoveDuplicatesSolution001 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;
        
        int index = 1;
    }
};
    
    
    
    
