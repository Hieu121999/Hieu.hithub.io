/*
*Bài 9: Tính T(n) = 1 x 2 x 3…x N
*/
#include <iostream>
using namespace std;


int main(){
	int n;
	double s=1;
	do{
		cin>>n;
		if(n<0){
			cout<<"Yeu cau nhap lai!";
		}
	}while(n<0);
	
	for(int i=1;i<=n;i++){
		s = s *(double)i;	
	}
	cout<<s;
}
