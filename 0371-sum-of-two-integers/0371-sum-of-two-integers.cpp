class Solution {
public:
    int getSum(int a, int b) {
        
        if(a>=0 && b>=0){
            while(b--){
                a++;
            }
            return a;
        }else if(b<0 && a<0){
            while(a<0){
                a++;
                b--;
            }
            return b;
        }else{
            if(a<0 && b>=0){
                int aux=a;
                a=b;
                b=aux;
            }
            while(a--){
                b++;
            }
            return b;
        }
}
};