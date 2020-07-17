/*
*Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
*/
#include <iostream>
#include<cmath>
using namespace std;

int main(){
long p=1;
double s=0;
double t=1;
	float x,n;
	cin>>x;
	cin>>n;

for(int i=1;i<=n;i++){
  p=p*i;
  t = t*x;
s=  s+ (double)t/p;
}
cout<<s<<endl;
}
