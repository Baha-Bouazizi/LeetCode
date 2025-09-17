class FoodRatings {
    private:
    unordered_map<string, pair<string, int>> foodInfo; 
    unordered_map<string, set<pair<int, string>>> cuisineFoods;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
           int n = foods.size();
        for (int i = 0; i < n; i++) {
            foodInfo[foods[i]] = {cuisines[i], ratings[i]};
            cuisineFoods[cuisines[i]].insert({-ratings[i], foods[i]}); 
        }
        
    }
    
      void changeRating(string food, int newRating) {
        auto [cuisine, oldRating] = foodInfo[food];
        cuisineFoods[cuisine].erase({-oldRating, food});
        cuisineFoods[cuisine].insert({-newRating, food});
        foodInfo[food].second = newRating;
    }
    
      string highestRated(string cuisine) {
        return cuisineFoods[cuisine].begin()->second; 
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */