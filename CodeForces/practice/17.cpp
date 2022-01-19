#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll n;

int main()
{
	cin>>n;
	vector<ll> vec;
	ll a,sum=0,twin1=0,count=0;
	for(int i=0;i<n;i++) {
		cin>>a;
		sum += a;
		vec.push_back(a);
	}

	sort(vec.begin(),vec.end(), greater<int>());
	for(int i=0;i<vec.size();i++)
	{
		twin1 += vec[i];
		count++;

		if(twin1>(sum-twin1))
			break;
	}

	cout<<count<<endl;

	
	return 0;
}