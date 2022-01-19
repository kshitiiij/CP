#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;

int main()
{
	cin>>t;
	while(t--)
	{
		ll a,sunny=0,rainy=0;
		for(i=1;i<7;i++)
		{
			cin>>a;
			if(a==0)
				rainy++;
			else if(a==1)
				sunny++;
		}

		if(sunny>rainy)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}