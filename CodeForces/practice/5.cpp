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
		ll count = 1;
		n -=1;
		vector<ll> vec;
		ll val = 1;
		vec.push_back(val);
		cout<<val<<" "<<n<<endl;
		while(n>0)
		{
			if(val+2<=n)
			{
				count++;
				val+=2;
				vec.push_back(val);
				//cout<<val;
				n = n - val;
				//cout<<val<<" "<<n<<endl;
				
			}
			else if(val+1<=n)
			{
				count++;
				
				val+=1;
				vec.push_back(val);
				//cout<<val;
				n = n - val;
				//cout<<" "<<n<<endl;
				//cout<<val<<" "<<n<<endl;
			}
			else if(val<=n)
			{
				count++;
				//cout<<val;
				n -= val;
				//cout<<" "<<n<<endl;
				//cout<<val<<" "<<n<<endl;
			}
			else
			{
				count++;
				for(auto i = vec.end();i != vec.begin(); i--)
				{
					if(*i<=n)
					{
						// count++;
						// n = n - *i;
						// cout<<*i<<" "<<n<<endl;
						// break;

						cout<<*i<<" ";
					}
				}
				n -=1;
				
				
			}
		}
		//cout<<count<<endl;
	}
	return 0;
}