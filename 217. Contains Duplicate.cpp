class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //sorting array
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) //checking if each element is the same
                return true;
        }
            return false;
    }
};

