/*
*Bài 23: Đếm số lượng “ước số” của số nguyên dương n
*/
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
   int n;
   double s=1;
 int dem=0;
   	do {
	   	cin>>n;
	   	if(n<0){
	   		cout<<"Nhap lai:";
	   	}
	   }while (n<0);
	   
	   for(int i=1;i<=n;i++){
   		   if(n%i==0){
   		  
		dem++;
		 
		   
		   }
   	}
   	   cout<<dem<<endl;
   
}
