class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> s;              //used set so that identical vector does not repeats.
        vector<vector<int>> v;
        int left,right,sum=0;
         
        if(nums.size()<3){
            return v;
        }
        sort(nums.begin(),nums.end());   //first,sort the array so that the -ve values occur first and the +ve values later.
        
        for(int i=0;i<nums.size()-2;i++){         
            
            left=i+1;right=nums.size()-1;sum=0-nums[i];
            
            while(left<right){
                
                if(nums[left]+nums[right]==sum){
                    s.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right]<sum){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
       for(auto val: s){
           v.push_back(val);
       }
        return v;
    }
};