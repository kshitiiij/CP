#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;

ll t,n,k;

ll subt(ll nu)
{ 
    if(nu<20500)
    	return nu/2050;
    ll x=(ll)log10(nu/2050);
    ll y=2050*pow(10,x);
    return 1+subt(nu-y);
}
 
main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2050)
		{
    		cout<<-1<<endl;
    		continue;
		}
		cout<<subt(n)<<endl;
	}
}