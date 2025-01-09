class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
       int res=0 ;string subs="" ; 
       for(int i=0 ;i<words.size();i++) {
        
       if( pref.size()<=words[i].size()){
                  subs=words[i].substr(0,pref.size()) ;
       }
         if(subs==pref){
              res++ ;
         } 
         subs="" ;
       }
       return res ;
    }
};