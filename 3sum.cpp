#include <map>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        map<vector<int>,int> result;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right=nums.size()-1;

            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];

                if(sum==0){
                    vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[left]);
                    ans.push_back(nums[right]);
                    result[ans]++;
                    left++;
                    right--;
                }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        for(auto i=result.begin();i!=result.end();i++){
            ans.push_back(i->first);
        }
        return ans;
        
    }
};
