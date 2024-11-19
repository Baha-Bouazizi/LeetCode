class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
     set<int> s ;int r=0 ;
     for(int i=0;i<=nums.size()-k;i++)  {
        s.clear() ;int sum=0 ;
        for(int j=i;j<i+k;j++){
         s.insert(nums[j]) ;
        }
        if(s.size()==k){
         for(int i:s){
            sum+=i ;
         }
         if(sum>r){
            r=sum ;
         }
        }
     } 
     return r ;
    }
};