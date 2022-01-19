//New Year
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		while(true) {
			if(n<2020) {
				cout<<"NO"<<endl;
				break;
			}
			else if(n%2020 ==0 or n%2021==0) {
				cout<<"YES"<<endl;
				break;
			}

			
		}
		
		if(rem1==0 or rem2 ==0 or rem3 == 0 or rem4 ==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;

}