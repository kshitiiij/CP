#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll n,den =0;
	cin>>n;
	while(n>0) {
		if(n>=100) {
			den += n/100; n = n%100;
		}
		else if(n>=20) {
			den += n/20; n = n%20;
		}
		else if(n>=10) {
			den += n/10; n = n%10;
		}	
		else if(n>=5) {
			den += n/5; n = n%5;
		}
		else  {
			den += n;
			break;
		}
	}

	cout<<den<<endl;
	return 0;
}