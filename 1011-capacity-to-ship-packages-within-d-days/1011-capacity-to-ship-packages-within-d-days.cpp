class Solution {
public:
int findDays(vector<int>& arr, int d){
    int n = arr.size();
    int days = 1, load = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]+load>d)
        {
            days++;
            load = arr[i];
        }
        else
        {
            load+=arr[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(findDays(weights,mid)<=days)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
};