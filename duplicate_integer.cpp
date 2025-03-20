#include <vector>
#include <unordered_set>

class Solution {
    public:
        bool hasDuplicate(std::vector<int>& nums) {
            std::unordered_set<int> new_storage;
    
            for (int value : nums) {
                new_storage.insert(value);
            }
    
            if (new_storage.size() != nums.size()) {
                return true;
            } else {
                return false;
            }
        }
    };