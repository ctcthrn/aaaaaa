#include <iostream> <cctype>
using namespace std;
	int main(){
		int sys, num, s, d, k, numnum;
		char sysplus;
		cin>>sys;
		cin>>num;
		s = sys;
		d = 0;
		
	while((num/sys)!=0){
		sys = sys*s;
		d = d+1;
	}
	
	cout<<"max degree - "<<d<<endl;
	
	for(k=0;k<(d+1);k++){
		numnum = num/(sys/s);
	if (numnum>9){
	   sysplus=numnum+'47';
	   cout<<sysplus;
	   }else cout<<numnum;
		num = num%(sys/s);
		sys = sys/s;
		
	}
	
	}

