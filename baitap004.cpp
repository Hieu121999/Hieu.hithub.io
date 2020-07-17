#include <iostream>
using namespace std;


int main(){
	int n;
	float s=0;
	do{
		cin>>n;
		if(n<0){
			cout<<"Yeu cau nhap lai!";
		}
	}while(n<0);
	
	for(int i=1;i<=n;i++){
		s = s + 1.0/(2*i);
	}
	cout<<s;
}