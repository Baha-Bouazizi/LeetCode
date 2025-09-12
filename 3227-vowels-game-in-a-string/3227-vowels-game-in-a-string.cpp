class Solution {
public:
    bool doesAliceWin(string s) {
       int countv=0 ;
       for(char c:s) {
        if(c=='a'||c=='e'||c=='i'||c=='o'|| c=='u'){
            countv++ ;
        }
       }
               if(countv==0)return false ;

       return true ;
    }
};