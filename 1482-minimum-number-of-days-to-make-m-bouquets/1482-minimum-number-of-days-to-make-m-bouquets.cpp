class Solution {
public:

    bool possible(vector<int> &arr,int days,int m,int k){
        int n = arr.size();
        int cnt = 0, noOfB=0;
        for(int i = 0; i < n; i++){
            if(arr[i]<=days){
                cnt++;
            }
            else{
                noOfB += (cnt/k);
                cnt = 0;
            }
        }
        noOfB += (cnt/k);
        return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int mini=INT_MAX, maxi=INT_MIN;
        long long val = m*1LL*k*1LL;
        if(val>n) return -1;
        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int low = mini, high = maxi;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};