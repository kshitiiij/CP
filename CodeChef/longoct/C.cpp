//Longest AND Subarray
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		if(n==1 or n==2)
			cout<<1<<endl;
		else {
			float num = log2(n);
			ll temp = pow(2,int(num));
			ll temp2 = pow(2,int(num)-1);
			if(n == temp) {
				// cout<<(temp-temp2)<<endl;
				cout<<temp<<" "<<temp2<<endl;			}
			else
				cout<<max((temp-temp2),(n-temp+1))<<endl;
		}
	}
	return 0;

}