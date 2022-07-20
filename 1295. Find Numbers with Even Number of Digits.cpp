class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count = 0; //count the number
        for(int i=0;i<nums.size();i++){ //alternative method for(int n: nums)
          string str = ""; //initilise a string
            str = to_string(nums[i]); //convert array to string
            
            if(str.size()%2 == 0){ //check string size
                count++; 
            }
           }
        return count;
       }
};
