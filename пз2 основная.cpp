#include <iostream>
using namespace std;
int main(){
	char num;
	int sys, res;
	cin>>sys>>num;	
	res=0;
	while(num!=';'){
		res*=sys;
			if (num-'0'>9){
				res+=num-'A'+10;
			} else	
				res+=num - '0';
		cin>>num;
	}
	cout<<res;	
}

