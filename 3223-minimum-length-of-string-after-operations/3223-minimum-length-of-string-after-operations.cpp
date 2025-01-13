class Solution {
public:
    int minimumLength(string s) {
       map<char,int>mp ;
       for(auto it :s) {
        mp[it]++ ;
       }
       int res=0 ;
        for(auto it :mp) {
        if(it.second<=2) {
            res+=it.second ;continue ;
        }
        else{
            if(it.second%2==0){
                res+=2  ;
            }
            else{
                  res+=1 ;
            }
        }
       }
       return res ;
    }
};