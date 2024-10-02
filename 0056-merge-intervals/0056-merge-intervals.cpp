class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            cout<<nums[i][0]<<" "<<nums[i][1];
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i][0]<=nums[i-1][1]){
                nums[i][0]=nums[i-1][0];
                if(nums[i][1]<nums[i-1][1])
                    nums[i][1]=nums[i-1][1];
                nums[i-1][0]=-1;
                nums[i-1][1]=-1;
            }
        }
        vector<vector<int>>res;
        for(auto &a:nums){
            if(a[0]!=-1)
                res.push_back(a);
        }
        return res;
        
    }
};