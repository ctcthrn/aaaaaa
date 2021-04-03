#include <iostream> <cctype>
	int main(){
	char num;
	int sys, res;
	std::cin>>sys>>num;	
	res=0;
	while ((num = std::cin.get())!=' ') {
		res*=sys;
		if (num-'0'>9){
			res+=num-'A'+10;
		} else	
			res+=num - '0';
	}
		std::cout<<res;	
}


