#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll t,n,i;

int main()
{
	cin>>t;
	ll s;
	while(t--)
	{
		cin>>n>>s;
		ll left=0,right=n,diff=-1;
		for(i=0;i<=n;i++)
		{
			if(left+right == s and (right-left)>diff) {
				diff = right - left;
				left++;
				right--;
			}
			
			if(left+right <s)
			    left++;
			else
			    right--;
		}

		cout<<diff<<endl;

	}
	return 0;
}
