/*
*Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
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
	
	for(int i=1;i<=n;i++){
		s = s + ((double)i/(i+1));	
	}
	cout<<s;
}
