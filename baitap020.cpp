#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
   int n;
   int x;
   	do {
	   	cin>>n;
	   	if(n<0){
	   		cout<<"Nhap lai:";
	   	}
	   }while (n<0);
	   
	   for(int i=1;i<=n;i++){
   		   if(n%i==0){
		   	cout<<i<<endl;
		   }
   	}
   
}