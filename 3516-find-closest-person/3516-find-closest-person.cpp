class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(x-z)>abs(z-y))
        {
            return 2;
        }
        if(abs(x-z)<abs(z-y))
         return 1 ;
         return 0 ;
    }
};