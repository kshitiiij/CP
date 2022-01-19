#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;

ll check(ll n)
{
    ll ans,num;
    ans = log2(n);
    for( i=ans;i>0;i--)
    {
        num = pow(2,i);
        if(n % num ==0)
            return i;
    }
    return 0;
}


int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		bool alice = false;
		ll flag =0,fac;
		while(n>0)
		{
		    fac = check(n);
		    if(fac == 0) {
		        n -=1;
		        
		        alice = !alice;
		    }
		    else {
		        n /= pow(2,fac);
		        
		        alice = !alice;
		    }
		}
		
		if(alice)
		    cout<<"ALICE"<<endl;
		else
		    cout<<"BOB"<<endl;
	}
	return 0;
}