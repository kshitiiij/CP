//25
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,a,b,c,i,j;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		ll count =0;
		while(n>0) {
			if(n%25==0)
				break;
			if(n%10!=0 and n%10!=5) {
				n -= n%10;
				count++;
			}
			else if(n%10==0) {

			}
		}
		cout<<count<<endl;
	
		
	}
	return 0;
}