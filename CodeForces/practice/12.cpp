#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll m,n;

int main()
{
	cin>>m>>n;
	ll count =0;
	if(m%2==0)
		count += (m*n)/2;
	else if(n%2==0)
		count += (m*n)/2;
	else
		count += ((m-1)*n)/2 + (n-1)/2;

	cout<<count<<endl;
	return 0;
}