//Three Boxes
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i,a,b,c,d;

int main()
{
	cin>>t;
	while(t--) {
		cin>>a>>b>>c>>d;
		ll count =1,rem = d-c;
		if(rem>=b) 
			rem -= b;
		else {
			count++;
			rem = d-b;
		}
		if(rem<a)
			count++;

		cout<<count<<endl;

	}
	return 0;

}