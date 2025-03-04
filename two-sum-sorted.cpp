class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        vector<int> result;
        int sum = 0;
        while(start < end) {
            sum = nums[start] + nums[end];
            if (abs(sum) < abs(target))
                start++;
            else if(abs(sum) > abs(target))
                end--;
            else {
                result.push_back(start);
                result.push_back(end);
                break;
            }
        }

        if (abs(sum) != abs(target)) {
            result.push_back(-1);
            result.push_back(-1);
        }

        return result;
    }
};
