class Twitter {
public:
    // userid -> tweetid
    unordered_map<int, vector<pair<int,int>>> tweetM;
    // userid -> userid for follow
    unordered_map<int, vector<int>> followM;
    int id = 0;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweetM[userId].push_back({id++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> person = {userId};
        priority_queue<pair<int,int>> temp;
        for(auto a : followM[userId]){
            person.push_back(a);
        }
        for(auto b : person){
            for(int i = (int)tweetM[b].size()-1; i >= 0 && i >= (int)tweetM[b].size()-10; i--){
                pair<int,int> tweet = tweetM[b][i];
                temp.push(tweet);
            }
        }
        vector<int> ans;
        while(!temp.empty() && ans.size() != 10){
            ans.push_back(temp.top().second);
            temp.pop();
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        if(followeeId != followerId && !count(followM[followerId].begin(), followM[followerId].end(), followeeId)){
            followM[followerId].push_back(followeeId);
        }
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followeeId != followerId){
            vector<int> vec = followM[followerId]; 
            vec.erase(remove(vec.begin(), vec.end(), followeeId), vec.end());
            followM[followerId] = vec; 
        }
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */