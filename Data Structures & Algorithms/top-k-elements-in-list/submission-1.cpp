class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(int num : nums){ //loop map to store how many times a number appears
            count[num]++;
        }
        vector<vector<int>> buckets(nums.size()+1);
        for(auto& [num,freq]:count){  //create n+1 empty buckets
            buckets[freq].push_back(num);
        }
        vector<int>result;
        for(int i= buckets.size()-1;i>=0; i--){  //empty list to store answers
            for(int num : buckets[i]){ //scan from end
                result.push_back(num);
                if(result.size()==k)
                return result;
            }
        }
    }
};
