class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
         bool k ;
        if(arr.size()<3){
            return false ;
        }
        else{
            
                 k=false ;
        for(int i=0;i<=arr.size()-3;i++){
            int s=0 ;
           for(int j=i;j<i+3;j++) {
               if(arr[j]%2!=0){
                   s++ ;
               }
           }
            if(s==3){
               k=true ; ;
            }
            else{
                continue ;
            }
            
           }
              
            }
      return k ; 
    }
};