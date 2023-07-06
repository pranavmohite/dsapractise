//Given two char c1 and c2.  you need to print all the alphabet starting from c1 to c2 in a single line.
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


void alphabets(char c1, char c2){
    // code here
    for(char i=c1;i<=c2;i++)
      cout<<i<<" ";
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    char c1, c2; cin>>c1>>c2;
            
        alphabets(c1, c2);
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
