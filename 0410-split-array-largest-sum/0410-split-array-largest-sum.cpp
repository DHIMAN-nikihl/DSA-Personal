class Solution {
public:
int countSum(vector<int> &nums,int largeSum){
    int n = nums.size();
    int sum = 1;
    long long split = 0;
    for(int i = 0; i<n; i++){
        if(split+nums[i]<=largeSum){
            split+=nums[i];
        }
        else{
            sum++;
            split=nums[i];
        }
    }
    return sum;
}
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {
            int mid = (low+high)/2;
            int sum = countSum(nums,mid);
            if(sum>k)
            {
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return low;
    }
};