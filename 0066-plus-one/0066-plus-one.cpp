class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       string s="" ;
       for(int i:digits) {
        s+='0'+i ;
       }
       int n= stoi(s)+1 ;
        s= to_string(n) ;
       vector<int> res ;
       for(char i:s){
        res.push_back(i-'0') ;
       }
       return res ;
    }
};