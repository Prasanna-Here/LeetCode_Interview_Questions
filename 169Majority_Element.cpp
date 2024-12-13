#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0],vote=1;
        for(int i=1;i<nums.size();i++)
        {
            if(vote==0)
            {
                vote++;
                major=nums[i];
            }
            else if(major==nums[i]){
                vote++;
            }
            else{
                vote--;
            }
        }
        return major;
    }
};
int main()
{
    vector <int> nums;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        nums.push_back(num);
    }
    Solution soln;
    cout<<soln.majorityElement(nums);
}