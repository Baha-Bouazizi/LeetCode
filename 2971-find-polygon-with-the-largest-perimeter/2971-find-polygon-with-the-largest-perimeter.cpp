class Solution {
public:
long long Sum(vector<int>& nums,int n){
    long long  sum= 0 ;
    for(int i=n ;i>=0 ;i--){
sum+=nums[i] ;
        }
        return sum ;
}
    long long largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end()) ;
        int n=nums.size() ;
        for(int i=n-1 ;i>=0 ;i--){
          if(nums[i]<Sum(nums,i-1)){
            return nums[i]+Sum(nums,i-1) ;
          }
        }
        return -1 ;
    }
};