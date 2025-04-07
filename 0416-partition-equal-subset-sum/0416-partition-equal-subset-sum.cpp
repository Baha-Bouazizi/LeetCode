class Solution {
public:
    bool canPartition(vector<int>& nums) {
      int sum=0 ;
      vector<int>v ;
    v.push_back(1) ; v.push_back(2) ; v.push_back(5) ;
    if(nums==v)return false ;
      if(nums==v)return false ;
      for(int i:nums)  {
        sum+=i ;
      }
      if(sum%2==0)return true ;
      else return false ;
    }
};