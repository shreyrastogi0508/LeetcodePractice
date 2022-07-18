/** 

Given an array, arr[] of N elements such that every element of the array is an integer in the range 1 to n, the task is to find the sum of all the distinct elements of the array.

 

Example 1:

Input: N = 9
arr[] = {5, 1, 2, 4, 6, 7, 3, 6, 7}
Output: 28
Explanation: The distinct elements in 
the array are 1, 2, 3, 4, 5, 6, 7.
Example 2:

Input: N = 3, arr[] = {1, 1, 1}
Output: 1

**/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	int sumOfDistinct(int arr[], int n) 
	{ 
	  sort(arr,arr+n); //sorting array
	  int sum=0; //initialize sum
	  for(int i=0;i<n;i++){ //loop to add the sum of all distinct elements
	      if(arr[i]==arr[i+1]){
	          continue; //if equal skips the value
	      }
	      else{
	          sum=sum+arr[i];
	      }
	  }
	  return sum;
	}
		 

};

// { Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

       

        Solution ob;
        cout << ob.sumOfDistinct(a,n);
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
