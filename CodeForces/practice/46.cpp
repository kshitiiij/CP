//Young Physicist
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,h,m,i,j;

int main()
{
	cin>>n;
	ll x,y,z,sx=0,sy=0,sz=0;
	for(i=0;i<n;i++) {
		cin>>x>>y>>z;
		sx += x; sy += y; sz +=z;
	}
	if(sx==0 and sy==0 and sz==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}