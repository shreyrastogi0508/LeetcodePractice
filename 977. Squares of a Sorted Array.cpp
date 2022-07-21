//O(nlogn) solution

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

//O(n) solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,0); //creating a vector result
        int left=0; int right=n-1; //searching from both sides
        int pointer=n-1; //index at which value will be stored in result
        while(left<=right){
            if(abs(nums[left])>=abs(nums[right])){ //if abs[left] is greater then its sqr will be greater too
                result[pointer] = nums[left]*nums[left]; //store it in pointer
                left+=1;
                
            }else{
                result[pointer] = nums[right]*nums[right];
                right-=1;
            }
            pointer-=1;
            
        }return result;
    }
};
