class Solution {
public:
    int maxElem(vector<int> &v){
        int n = v.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        return maxi;
    }
    long long calculateTotalH(vector<int>&v,int hourly){
        int n = v.size();
        long long totalH=0;
        for(int i=0;i<n;i++){
            totalH += (v[i] + hourly - 1) / hourly;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxElem(piles);
        while(low<=high){
            int mid = low+(high-low)/2;
            long long totalH = calculateTotalH(piles,mid);
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};