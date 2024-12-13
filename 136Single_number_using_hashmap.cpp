#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> rep_map;
        for (int num : nums)
        {
            rep_map[num]++;
        }
        for (int num : nums)
        {
            if (rep_map[num] == 1)
                return num;
        }
        return 0;
    }
};

int main()
{
    Solution sol;
    vector<int> nums;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    cout << sol.singleNumber(nums);
    return 0;
}