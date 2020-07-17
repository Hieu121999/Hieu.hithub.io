/*
*Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
*/
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
   int n;
 int max=0;
   	do {
	   	cin>>n;
	   	if(n<0){
	   		cout<<"Nhap lai:";
	   	}
	   }while (n<0);
	   
	   for(int i=1;i<n;i++){
   		   if(n%i==0&&i%2==1&&i>max){
		    max =i;
		   }
		 
   	}
 
     cout<<max<<endl;
}
