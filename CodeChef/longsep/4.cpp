#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef long long int ll;
ll t,n,x,i;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		ll arr[n];
		ll xo[n];
		for(i=0;i<n;i++) cin>>arr[i];

		for(i=0;i<n;i++)
			xo[i] = arr[i]^x;

		map<ll,ll> freq,ar;

		for(i=0;i<n;i++)
		{
			if(freq.find(arr[i])== freq.end())
				freq.insert(make_pair(arr[i],1));
			else
				freq.at(arr[i])++;

			if(freq.find(xo[i])== freq.end()) 
				freq.insert(make_pair(xo[i],1));
			else 
				freq.at(xo[i])++;

			if(ar.find(xo[i])== ar.end()) 
				ar.insert(make_pair(xo[i],1));
			else 
				ar.at(xo[i])++;
		}

		for(auto j = freq.begin(); j != freq.end(); ++j )
			cout<<j->first<<": "<<j->second<<endl;



		// pair<ll,ll> p = make_pair(0,0);
		// for(auto j = freq.begin(); j != freq.end(); ++j)
		// {
		// 	if(j->second > p.second)
		// 	{
		// 		p.first = j->first;
		// 		p.second = j->second;
		// 	}
		// }

		// pair<ll,ll> pa = make_pair(p.first,0);
		// if(ar.find(p.first) != ar.end())
		// {
		// 	for(auto j = ar.begin(); j!= ar.end(); ++j)
		// 	{
		// 		if(j->first == pa.first)
		// 			pa.second++;
		// 	}
		// 	//cout<<p.second<<" "<<(p.second-pa.second)<<endl;
		// }
		// else
		// 	//cout<<p.second<<" "<<0<<endl;
	}
	return 0;
}