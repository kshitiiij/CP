//Even Odds
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,k,i;

int main()
{
	cin>>n>>k;
	if(n%2==0){
		if(k<=n/2)
			cout<<(k-1)*2+1<<endl;
		else
			cout<<2*(k-n/2)<<endl;
	}
	else {
		if(k-1<=n/2)
			cout<<(k-1)*2+1<<endl;
		else
			cout<<2*(k-n/2-1)<<endl;
	}


	return 0;

}