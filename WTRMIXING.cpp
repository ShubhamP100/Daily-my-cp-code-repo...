#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a==b){
	    cout<<"YES"<<endl;
	    }else if(a<b && (b-a) <=x)
	    cout<<"YES"<<endl;
	    else if(a>b && (a-b)<=y)
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
// A very good question in this contest and the first approach is to read properly the constraints and think about maths wise at all... 
