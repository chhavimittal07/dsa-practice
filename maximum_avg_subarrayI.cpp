class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int max=sum;
        for(int right=k;right<nums.size();right++){
            sum=sum+nums[right]-nums[left];
            left++;
            if(sum>=max){
                max=sum;
            }
        }
        double avg=max/(double)k;
        return avg;
        
    }
};