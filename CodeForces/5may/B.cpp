#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll count =0;
		ll num1,num2,rem;
		num1=num2=n;
		if(n<10)
			cout<<n<<endl;
		else if(n==10)
			cout<<9<<endl;
		else
		{	
			count = 9;
			ll raise=2;
			while(n>pow(10,raise))
			{
				count+=9;
				raise++;
			}
			ll rem,num=0,flag=0;
			rem = n/(pow(10,raise-1));
			//ll num=0;
			for(ll i=0;i<raise;i++)
			{
				num += rem*pow(10,i);
			}

			//ll flag=0;
			if(n>=num)
				flag=1;
			count = count + rem -1 + flag;
			cout<<count<<endl;
		}

	}
	return 0;
}