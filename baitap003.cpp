/*
*B3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
*/

#include <iostream>
using namespace std;



int main()
{
	int x;
	float s=0;
	do
	{
		cin >> x;
		if (x < 0)
			cout << "Nhap sai, yeu cau nhap lai!";
	} while (x < 0);
    for(int i=1; i<=x;i++){
	   s = s + 1.0/i;
    }
    
    cout<<s;
}
