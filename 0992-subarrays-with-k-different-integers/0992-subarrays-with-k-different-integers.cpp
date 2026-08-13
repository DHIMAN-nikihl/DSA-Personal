class Solution {
public:
int distinctElements(vector<int>& nums, int k) {
 int r = 0, l = 0, cnt = 0;
        unordered_map<int,int> mpp;
        while(r<nums.size()){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            if(mpp.size()<=k){
                cnt += r-l+1;
            }
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return distinctElements(nums,k) - distinctElements(nums,k-1);
    }
};