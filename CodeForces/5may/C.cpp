#include<bits/stdc++.h>
#include<cstring>
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
		if(n==1)
			cout<<1<<endl;
		else if(n==2)
			cout<<-1<<endl;
		else
		{
			
    	int j=1;
    	for(int i=1;i<=n*n;i+=2)
    	{
        	cout<<i<<" ";
        	if(j%n==0)
        	cout<<endl;
        	j++;
    	}
    	for(int i=2;i<=n*n;i+=2)
     	{
        	cout<<i<<" ";
        	if(j%n==0)
        	cout<<endl;
        	j++;
    	}	

			
	
		
		}
	}
	return 0;
}