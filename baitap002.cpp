#include <iostream>
using namespace std;
 
int main()
{
 int S=0,n;
cout<<"Nhap n:";
 cin>>n;
 for(int i=0; i<=n;i++) {
 	S= S+(i*i);
 }
 cout<<S;
 return 0;
}