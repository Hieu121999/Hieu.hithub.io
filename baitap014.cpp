/*
*Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
*/
#include <iostream>
#include<cmath>
using namespace std;

int main(){

	int x;
	cin>>x;

	double s=0;
	long p=1;
		float n;
	cin>>n;



for(int i=1;i<=n;i++){
 p = pow(x, (2 * i +1));
 s = s + (double)p;
}
cout<<s<<endl;
}
