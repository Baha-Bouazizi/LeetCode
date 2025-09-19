class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m ;
        for(int i:nums){
            m[i]++ ;
        }
         auto it = min_element(m.begin(), m.end(),
                               [](const auto &a, const auto &b){
                                   return a.second < b.second;
                               });
                               return it->first ;
    }
};