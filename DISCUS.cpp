#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int ans=a;
	    if(b>ans){
	    ans=b;
	   } else if(c>ans){
	    ans=c;
	    }
	    cout<<"ans"<<endl;
	    
	}
	return 0;
}
