//Groups
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,h,m,i,j;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		map<int,set<int>> mp;
		set<int> s,s1;
		for(i=1;i<=n;i++) {
			for(j=1;j<=5;j++) {
				cin>>h;
				if(h==1) 
					mp[j].insert(i);
			}
		}

		// for(auto i=mp.begin();i!=mp.end();++i) {
		// 	if(i->second.size()<n/2)
		// 		mp.erase(i->first);
		// }

		
		for(i=1;i<=n;i++)
			s1.insert(i);

		ll flag=0;
		// for(i=1;i<mp.size();i++) {
		// 	if(flag==1)
		// 		break;
		// 	for(j=i+1;j<=mp.size();j++) {
		// 		s = mp[i];
		// 		s.insert(mp[j].begin(),mp[j].end());
		// 		if(s==s1)
		// 			flag=1;
		// 	}
		// }

		for(i=1;i<mp.size();i++) {
			if(flag==1)
				break;
			if(mp[i].size()>=n/2) {
				for(j=i+1;j<=mp.size();j++) {
					if(mp[j].size()>=n/2) {
						s = mp[i];
						s.insert(mp[j].begin(),mp[j].end());
						if(s==s1)
							flag=1;
					}	
				}
			}
		}

		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}