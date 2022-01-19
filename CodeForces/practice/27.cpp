//Chess Tournament
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		string s;
		cin>>s;
		char arr[n][n];
		ll two=0;
		for(i=0;i<n;i++) {
			if(s[i]=='2')
				two++;
		}

		if(two<3 and two>0)
			cout<<"NO"<<endl;
		else {
			for(i=0;i<n;i++) {
				for(ll j=0;j<n;j++) {
					if(i==j)
						arr[i][j] = 'X';
					if(s[i]=='1') 
						arr[i][j] = '=';
					
				}
			}
		}
	}
	return 0;

}