struct Comp {
    bool operator()(const pair<int, string> &a, const pair<int, string> &b) const {
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

class FoodRatings {
public:
    unordered_map<string, priority_queue<pair<int, string>, vector<pair<int, string>>, Comp>> R;
    unordered_map<string, string> F;
    unordered_map<string, int> foodToRating;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i = 0; i < foods.size();i++){
            string Cu = cuisines[i];
            string Fo = foods[i];
            int Ra = ratings[i];
            R[Cu].push({Ra, Fo});
            F[Fo] = Cu;
            foodToRating[Fo] = Ra;
        }
    }
    
    void changeRating(string food, int newRating) {
        string cu = F[food];
        foodToRating[food] = newRating;
        R[cu].push({newRating, food});
    }
    
    string highestRated(string cuisine) {
        auto &pq = R[cuisine];
        while(!pq.empty()){
            auto top = pq.top(); 
            if(foodToRating[top.second] == top.first){
                return top.second;
            }
            pq.pop();
        }
        return "";
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */