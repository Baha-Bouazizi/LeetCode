class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false ;
        }
      int s=s1.size() ;
        map<char,int>mp ,mpc ;
        for(auto & it:s1){
            mp[it]++ ;
            
        }
        for(int i=0 ;i<=s2.size()-s;i++){
            string subStr = s2.substr(i, s);
            for(auto it :subStr){
                mpc[it]++ ;
            }
            if(mpc==mp){
                return true ;
            }
            else{
             mpc.clear() ;   continue ;
            }
        }
        return false ;
    }
};