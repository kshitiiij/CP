#include<bits/stdc++.h>
#include<deque>
using namespace std;

typedef long long int ll;
ll t,n,m,a,i,j;


int main()
{
		cin>>t;
		while(t--)
		{
			cin>>n;
			vector<ll> v1,v2,t;
			vector<vector<ll>> v;
			for(i=0;i<n;i++) {
				cin>>a;
				v1.push_back(a);
				// v2.push_back(a);
			}
			v2 = v1;
			ll count =0;
			sort(v2.begin(),v2.end());
			for(i=0;i<v2.size();i++) {
				for(j=0;j<v1.size();j++) {
					// if(i==j and v1[j]==v2[j])
					// 	continue;
					if(v1[j]==v2[i]) {
						count++;
						cout<<i+1<<" "<<j+1<<" "<<abs(j-i)<<endl;
						t.push_back(i+1);
						t.push_back(j+1);
						t.push_back(abs(j-i));
						v.push_back(t);
						t.clear();
					}
				}
			}
			cout<<count<<endl;
			for(int x = 0;x < v.size(); x++) {
				for(int y = 0; y != v[i].size(); y++)
					cout<<v[x][y]<<" ";
				cout<<endl;
			}
		}
		
	
	return 0;
}