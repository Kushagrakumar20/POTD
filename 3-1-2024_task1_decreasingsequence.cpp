//Time complexity --> O(n)
//Space complexity --> O(1)
//comparing adjacent element of array and find the number of times k must be subtract from a[i] to make the sequence decreasing
//by the quotient and remainder when difference is divided by k.


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int minMoves(int a[], int n, int k);

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
    	for(int i=0;i<n;i++)
    	    cin>>a[i];
	   
    	cout<<minMoves(a,n,k)<<"\n";
	}
	return 0;
}

// } Driver Code Ends


int minMoves(int a[], int n, int k)
{
    int sum = 0;
    // int i = 0;
    
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            int b=(a[i]-a[i-1])/k; 
            if((a[i]-a[i-1])%k!=0) b++;    // dtermining how many times we have to subtract k from a[i] by checking divion and remaider
            a[i]-=b*k;
            sum+=b;
            sum = sum%1000000007;
        }
    }
    
    return sum;
}