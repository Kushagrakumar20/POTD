//User function template for C++
//Time complexity --> O(n)
//Space complexity --> O(1)
//accesing every element of the array and updating the value of largest ans second largest of array.


class Solution{
public:	
	int print2largest(int arr[], int n) {
	    
	    int largest = arr[0] , seclargest = INT_MIN;
	    for(int i=0; i<n; i++){
	        if(arr[i] > largest) {
	            seclargest = largest;
	            largest = arr[i];
	        }
	        else if(arr[i] < largest && arr[i] > seclargest) seclargest = arr[i];
	    }
	    if(seclargest == INT_MIN) return -1;
	    return seclargest;
	}
};