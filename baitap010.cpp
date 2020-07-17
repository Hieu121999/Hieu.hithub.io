#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
 double x;
 double n;
 double s;
  do{
  	 cout<<"Nhap x:";
      cin>>x;
  	if(x==0){
	  	cout<<"Nhap lai:\n";
	  }
  }while(x==0);
  
 cout<<"nhap n:";
cin >>n;

s = pow(x,n);

cout <<s<<endl;

}