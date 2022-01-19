#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i,a,b;

int main()
{
	cin>>t;
	
	while(t--)
	{	
		cin>>n;
		if(n%3==1)
		{
			a = n/3 +1;
			b = n/3;
		}
		else if(n%3 == 2)
		{
			a = n/3 ;
			b = n/3 +1;
		}
		else
		{
			a = n/3;
			b = n/3;
		}

		cout<<a<<" "<<b<<endl;
	}

	return 0;	
}