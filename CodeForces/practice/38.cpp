//Sasha
#include<bits/stdc++.h>
#include<limits>
using namespace std;
typedef long long int ll;
ll t,n,v,i;

int main()
{
	cin>>n>>v;
	n--;
	if(v>=n)
		cout<<n<<endl;
	else {
		ll ans = v;
		i = 2;
		n -=v;
		while(n>0) {
			ans += i;
			i++;
			n--;
		}
		cout<<ans<<endl;
	}
	return 0;
}