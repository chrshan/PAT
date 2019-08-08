#include <iostream>
using namespace std;
int main() 
{
	int m,n=0;
	scanf("%d",&m);
	while(m-1)
	{
		if (m%2==0) m/=2;
		else m=(3*m+1)/2;
		n++;
	}
	cout<<n<<endl;
	return 0;
}
