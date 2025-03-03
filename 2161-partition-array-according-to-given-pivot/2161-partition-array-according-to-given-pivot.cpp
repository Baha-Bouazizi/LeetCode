class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lessthen ;vector<int> greaterthan ;;vector<int> equalto ;
        vector<int>reult ;
        for(int i:nums){
            if(i>pivot) greaterthan.push_back(i) ;
            if(i<pivot) lessthen.push_back(i) ;
            if(i==pivot) equalto.push_back(i) ;
        }
                for(int i:lessthen){
                  reult.push_back(i)  ;

    }
                for(int i: equalto){
                  reult.push_back(i)  ;

    }
                for(int i:greaterthan){
                  reult.push_back(i)  ;

    }
    return reult ;}
};