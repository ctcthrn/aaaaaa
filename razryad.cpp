#include <iostream>
int main(){
	int x,xx,a,b,k;
	int n = 10, nn = 1;
	std::cin>>x;
while ((x/n)!=0){
	n = n*10;
	nn = nn + 1;
}
std::cout<<"number of digits - "<<nn<<std::endl;
	int nz=n;
for(k=1;k<nn+1;k++){
	xx = x/(n/10);
	std::cout<<xx<<"*"<<n/10;
	x = x%(n/10);
	n = n/10;
if(k<nn){
	std::cout<<"+";
}
		
} 

}
