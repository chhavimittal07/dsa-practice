class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        bool found=false;
        for(int i=0;i<nums.size();i++){
            if(seen.count(nums[i])){
                found=true;
                break;
            }
            seen.insert(nums[i]);
            

        }
        return found;
        
    }
};