/*
*Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
*/
#include <iostream>
using namespace std;


int main(){
	int n;
	double s=0;
	do{
		cin>>n;
		if(n<0){
			cout<<"Yeu cau nhap lai!";
		}
	}while(n<0);
	
	for(int i=0;i<=n;i++){
		s = s + (double)(2 * i + 1 )/( 2 * i + 2);	
	}
	cout<<s;
}
