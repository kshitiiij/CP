#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

ll xo(ll a, ll b)
{
	ll c = a^b;
	//cout<<c<<endl;
	return c;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> arr;
		for(ll i=0;i<n;i++)
			{
				ll m;
				cin>>m;
				arr.push_back(m);
			}

		vector<ll>::iterator o;
		o = arr.begin();
		for(auto p=arr.begin();p!=arr.end()-1;p++)
		{
			ll a = arr.at((ll)p);
			ll b = arr.at((ll)p+1);
			ll c = xo(a,b);
			//o=p;
			// arr.erase(o);
			// arr.erase(o+1);
			// arr.push_back(c);
			// ++o;
		}

		ll flag=0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"NO"<<endl;

	}
	//ll a=2,b=0;
	//xo(a,b);
	return 0;
}