#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   
	   int x,y;
	   cin>>x>>y;
	   int a=2,b=5;
	   if(a*x>b*y){
	       cout<<"Chocolate"<<endl;
	       
	       
	   }else if(a*x==b*y){
	       cout<<"Either"<<endl;
	   }else{
	       cout<<"Candy"<<endl;
	   }
	}
	return 0;
}
