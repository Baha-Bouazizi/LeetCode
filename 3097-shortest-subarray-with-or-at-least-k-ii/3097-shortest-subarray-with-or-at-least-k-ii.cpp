class Solution {
public:
    void updateBits(int *check, int num, int val){
        int i = 0;
        while(num > 0){
            if(num & 1){
                check[i] += val;
            }
            i++;
            num >>= 1;
        }
    }

    int getNum(int *check){
        int ans = 0;
        int t = 1;
        for(int i = 0; i < 32; i++){
            if(check[i] > 0){
                ans += t;
            }
            t <<= 1;
        }
        return ans;
    }

    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int check[32] = {0};
        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        int t = 0;
        while(i < n){
            updateBits(check,nums[i++],1);
            while(j < i && getNum(check) >= k){
                ans = min(ans,i-j);
                updateBits(check,nums[j++],-1);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};