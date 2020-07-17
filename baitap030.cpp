/*
*Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
*/
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
   int n;
 int s=0;
   	do {
	   	cin>>n;
	   	if(n<0){
	   		cout<<"Nhap lai:";
	   	}
	   }while (n<0);
	   
	   for(int i=1;i<n;i++){
   		   if(n%i==0){
		  s = s+i;
		  if(s==n){
  			cout<<"so hoan hao";
  		}else{
		  	cout<<"khong phai so hoan hao";
		  }
		   }
	
   	}
 
     	 
}
