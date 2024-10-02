class Solution {
public:
    bool isPalindrome(int x) {
        string s=std::to_string(x);
        if(s.length()==1){
            return true  ;
        }
        int d=0 ;int f=s.length()-1;
        while(d<=f){
            if (s[d]==s[f]){
                d++ ;
                f-- ;
            }
              else {
                return false ;
            }
          
        }
        return true  ;
    }
} ;
