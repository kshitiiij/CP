//Computer Game
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,h,m,i;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		char one[n],two[n];
		for(i=0;i<n;i++) cin>>one[i];
		for(i=0;i<n;i++) cin>>two[i];

		ll flag =0,stat=1;
		for(i=0;i<n;i++) {
			if(stat==1) {
				if(two[i+1]=='1' and one[i+1]=='1') {
					flag =1;
					break;
				}
				if(one[i+1]=='1')
					stat=2;
			}
			else {
				if(two[i+1]=='1' and one[i+1]=='1') {
					flag =1;
					break;
				}
				if(two[i+1]=='1')
					stat=1;
			}
		}
		if(flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}

	
	return 0;

}