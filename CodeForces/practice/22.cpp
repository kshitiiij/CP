//unique bid auction
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i,a;


int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		vector<pair<int,int>> list,ar;
		for(i=0;i<n;i++) {
			cin>>a;
			list.push_back({a,i+1});
		}
		
		if(n==1) {
				cout<<1<<endl;
			}
		else {
			sort(list.begin(),list.end());
			for(i=0;i<n;i++) {
				if(i==0 and list[i].first != list[i+1].first) 
					ar.push_back({list[i].first,list[i].second});
				else if(i==n-1 and list[i].first!= list[i-1].first)
					ar.push_back({list[i].first,list[i].second});
				else if(list[i].first != list[i-1].first and list[i].first != list[i+1].first)
					ar.push_back({list[i].first,list[i].second});
			}
			
			if(ar.empty())
				cout<<-1<<endl;
			else {
				sort(ar.begin(),ar.end());
				cout<<ar[0].second<<endl;
			}		
		}
	}
		
	
	return 0;
}