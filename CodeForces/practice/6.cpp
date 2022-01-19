#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll sum =0,i=1,line=1;
		ll row,col;
		while(true)
		{
			if(sum+i>n)
				break;
			sum += i;
			i+=2;
			line++;
		}
		if(n-sum>0)
		{
			
		}
	}
	return 0;
}