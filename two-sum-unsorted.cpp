#include <vector>
#include <iostream>
#include <unordered_map>

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& arr, int target) {
            
            std::unordered_map<int, int> hashtable;
            std::vector<int> result;
            for (int i = 0; i < arr.size(); i++) {
                hashtable[arr[i]] = i;
            }

            for (int i = 0; i < arr.size(); i++) {
                if (hashtable.count(target - arr[i]) && hashtable[target - arr[i]] != i) {
                    result.push_back(i);
                    int secondIndex = hashtable[target - arr[i]];
                    result.push_back(secondIndex);
                    break;
                } else {
                    result = {};
                }
            }
            return result;
        }
};