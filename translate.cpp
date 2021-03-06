#include <iostream>
int main(){
	int num, n, sys;
	std::cin>>num>>sys;
	if(sys=2){
		n=num;	
		while((n/2)!=0){
		n=n/2;	
		std::cout<<n%2;
		}
		n=num/2;
		std::cout<<n%2;	
	}			
}

