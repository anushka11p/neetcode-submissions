class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>hashset(nums.begin(), nums.end());
        int longest=0;
        for(int num : nums){
            if(hashset.count(num-1)==0){
                int length = 1;
                while(hashset.count(num+1)){
                    num +=1;
                    length +=1;
                }  
                longest = max(longest, length);
            }
        }
        return longest;
    }
    };
