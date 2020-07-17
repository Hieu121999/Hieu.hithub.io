#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
	int n;
	do{
			cin>>n;
			if(n<0){
				cout<<"nhap lai:";
			}
	}while(n<0);

	double s=0;
	long p=1;
	for(int i=1;i<=n;i++){
		p = p*i;
		s = s + p;
	}
	cout<<s;
}