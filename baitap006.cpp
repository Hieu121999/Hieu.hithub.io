/*
*Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
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
	s = s + (double)1/(i*(i+1));
	}
	cout<<s;
}
