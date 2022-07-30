class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> :: iterator it; //declaring an iterator which will iterate each element
        it = nums.begin(); //starts on the first element
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){  //if iterator matches the val
                nums.erase(it); //delete the current element
                it--; //goes back to the original position
                i--; 
            }
            it++; // moves ahead
        }
      
        return nums.size();
    }
};
