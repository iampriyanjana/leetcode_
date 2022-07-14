class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

       
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    
    void mergeSort(vector<int>& nums,int low,int high){
        
        if(low<high){
            
            int mid=low+(high-low)/2;
            mergeSort(nums,low,mid);
            mergeSort(nums,mid+1,high);
            merge(nums,low,mid,high);
        }
    }
    void merge(vector<int>& nums,int lb,int mid,int ub){
        
        int i=lb,j=mid+1,k=0;vector<int> b(ub-lb+1);
        
        while(i<=mid && j<=ub){
            
            if(nums[i]<nums[j]){
                b[k++]=nums[i++];
            }
            else{
                b[k++]=nums[j++];
            }
        }
            
            while(j<=ub){
                
                b[k++]=nums[j++];
            }
            
            while(i<=mid){
                
                b[k++]=nums[i++];
            }
        for(int i=0;i<k;i++){
            nums[lb+i]=b[i];
        }
    }
};