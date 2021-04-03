#include <iostream>
using namespace std;
int main(){
	
	int Massiv[10];
	int Help;
	
	for(int k=1;k<=10;k++){
		cin>>Massiv[k];	
	}
	
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10-i;j++){
			if (Massiv[j]>Massiv[j+1]){
				Help=Massiv[j+1];
				Massiv[j+1]=Massiv[j];
				Massiv[j]=Help;
			}
		}
	}
	
	for(int k=1;k<=10;k++){
		cout<<Massiv[k]<<" ";
	}
}


