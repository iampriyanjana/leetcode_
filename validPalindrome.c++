class Solution {
public:
    bool isPalindrome(string s) {
        
        int left=0,right=s.size()-1;
        while(left<right){
            
            if(isalnum(s[left]) && isalnum(s[right])){
                
                if(tolower(s[left])!=tolower(s[right])){
                
                  return false;
                 }
                else{
                   left++;right--;
                 }
                
            }
            else{
                
                if(!isalnum(s[left])){
                    left++;
                }
                if(!isalnum(s[right])){
                    right--;
                }
                
            }
        }
        return true;
    }
};