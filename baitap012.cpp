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
	p = p*x;
	s = s + (double)p;
}
cout<<s<<endl;
}