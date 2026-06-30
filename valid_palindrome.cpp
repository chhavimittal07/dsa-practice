class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            bool found=isalnum(s[i]);
            if(found==true){
                
                s[j]=s[i];
                s[j]=tolower(s[j]);
                j++;

            }
        }
        int newsize=j;
        int left=0;
        int right=newsize-1;
        int result=true;
        while(left<right){
            if(s[left]!=s[right]){
                result=false;
                break;
            }
            left++;
            right--;
        }
        return result;
        
    }
};