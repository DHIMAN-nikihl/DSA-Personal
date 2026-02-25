class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mpp;
        for(int i = 0; i < n ;i++){
            int ans = nums[i];
            int secondAns = target - ans;
            if(mpp.find(secondAns)!=mpp.end()){
                return {mpp[secondAns],i};
            }
            mpp[ans] = i ;
        }
        return {-1,-1};
    }
};