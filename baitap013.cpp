/*
*Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
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
 p= pow(x, (2 * i ));
 s = s + (double)p;
}
cout<<s<<endl;
}
