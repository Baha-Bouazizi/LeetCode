class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v ;
       for(int i=0 ;i<boxes.size();i++) {
        int res=0 ;
        int j=i-1 ; 
        int k=i+1 ;
        if(j>-1){
            for(int w=j;w>=0;w--){
                if(boxes[w]=='1')res+=abs(w-i) ;
            }
        }
        if(k<boxes.size()){
           for(int w=k;w<boxes.size();w++){
                if(boxes[w]=='1')res+=abs(w-i) ;
            } 
        }
           
     v.push_back(res) ;
       }
       return v ;
    }
};