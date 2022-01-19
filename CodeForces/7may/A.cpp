#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,a,b,i,x,y,z;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		// if(a==b)
		// 	cout<<"NO"<<endl;
		// else if(a%b==0)
		// 	cout<<"NO"<<endl;
		if(b==1)
			cout<<"NO"<<endl;
		else
		{
			b=b*2;
			x = a*b;
			y = x+a;
			z = x+y;
			cout<<"YES\n";
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
	}
	return 0;
}


