//Elections
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,a,b,c,i,j;

int main()
{
	cin>>t;
	while(t--) {
		cin>>a>>b>>c;
		ll maxi = max(a,b);
		maxi = max(maxi,c);
		if(a==b and b==c)
			cout<<1<<" "<<1<<" "<<1<<endl;
		else if(a==b and a==maxi)
			cout<<1<<" "<<1<<" "<<maxi-c+1<<endl;
		else if(a==c and a==maxi)
			cout<<1<<" "<<maxi-b+1<<" "<<1<<endl;
		else if(c==b and b==maxi)
			cout<<maxi-a+1<<" "<<1<<" "<<1<<endl;
		else if(a==maxi)
			cout<<0<<" "<<maxi-b+1<<" "<<maxi-c+1<<endl;
		else if(b==maxi)
			cout<<maxi-a+1<<" "<<0<<" "<<maxi-c+1<<endl;
		else if(c==maxi)
			cout<<maxi-a+1<<" "<<maxi-b+1<<" "<<0<<endl;
		
	}
	return 0;
}