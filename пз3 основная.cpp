#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	
	int Big[99999];
	int n,s1,s2;
	int Help;
	
	cin>>n;
	
	for (int k=0; k<n ; k++){
		Big[k]=rand()%10;
		cout<<Big[k]<<" ";
	}
	
	cout<<" "<<endl;
	
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-1-i; j++){
			if (Big[j]>Big[j+1]){
				Help=Big[j+1];
				Big[j+1]=Big[j];
				Big[j]=Help;
				s1++;	
			}
		}
		for (int j=n-1-i; j>0; j--){
			if (Big[j]<Big[j-1]){
				Help=Big[j-1];
				Big[j-1]=Big[j];
				Big[j]=Help;
				s2++;
				}
			}
	}
	
	for (int k=0; k<n ; k++){
		cout<<Big[k]<<" ";
	}	
	
	cout<<" "<<endl;
	cout<<"1 cycle "<<s1<<endl;
	cout<<"2 cycle "<<s2;
}
