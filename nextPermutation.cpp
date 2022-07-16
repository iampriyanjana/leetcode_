class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        bool swapped=false;
        int i;
        for(i=nums.size()-1;i>0;i--){
            
            if(nums[i]>nums[i-1]){
                
                i=i-1;
                swapped=true;
                break;
            }
        }
        
        if(!swapped){
            
            reverse(nums.begin(),nums.end());
        }
        else{
         for(int j=nums.size()-1;j>i;j--){
            
            if(nums[i]<nums[j]){
                
                swap(nums[i],nums[j]);
                break;
            }
        }
        reverse(nums.begin()+i+1,nums.end());
        }
    }
};