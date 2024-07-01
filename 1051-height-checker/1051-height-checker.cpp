class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int> v=heights ;
        sort(v.begin(),v.end());
            int resultat=0 ;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=v[i]){
                resultat++ ;
            }
            }
         return resultat ;
        }
       
    
};