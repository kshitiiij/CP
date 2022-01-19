//Last min enhancements
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,a,n,i;


int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll> v;
		ll prev =0;
		for(i=0;i<n;i++) {
			cin>>a;
			if(i==0) {
				v.push_back(a);
				// cout<<a<<" ";
				prev =a;
			}
			else if(prev == a) {
				v.push_back(a+1);
				// cout<<a+1<<" ";
				prev = a+1;
			}
			else if(prev < a){
				v.push_back(a);
				// cout<<a<<" ";
				prev = a;
			}

		}
		cout<<v.size()<<endl;
	}
	return 0;
}