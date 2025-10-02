class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drunk = numBottles;
        int empty = numBottles;
        while (empty >= numExchange){
            drunk += 1;
            empty -= numExchange - 1;
            numExchange += 1;
        }
        return drunk;
    }
};