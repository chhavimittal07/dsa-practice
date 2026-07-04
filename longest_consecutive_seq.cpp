class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        
        
        for(int i=0;i<nums.size();i++){
            
            seen.insert(nums[i]);

        }
        int longest=0;
        
        for(int num:seen){
            if(!seen.count(num-1)){
                int len=1;
                while(seen.count(num+1)){
                    num++;
                    len++;
                }
                 longest= max(longest,len);


            }
           
        }
            
            
        
        
        
        
        return longest;
        
    }
};