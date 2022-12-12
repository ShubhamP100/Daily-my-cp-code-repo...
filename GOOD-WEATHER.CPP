#include <iostream>
using namespace std;

int main() {
int t,arr[7];
cin>>t;
	while(t--){
	    int count1=0,count0 = 0;
	    for(int i=0;i<7;i++){
	        cin>> arr[i];
	    }
	    for(int i=0;i<7;i++){
	        if(arr[i] == 0){
	            count0++;
	        }
	        else{
	            count1++;
	        }
	    }
	    if(count1>count0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
}
	return 0;
}
