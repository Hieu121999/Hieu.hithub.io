/*
*Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
*/
#include <iostream>
#include<cmath>
using namespace std;

int main(){
long p=0;
double s=1;
	int x,n;
	cin>>x;

for(int i=1;i<=n;i++){
  p=p+i;
s=(float)s+1.0/p;
}
cout<<s<<endl;
}
