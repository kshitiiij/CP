//Even Odds
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,k,i;

int main()
{
	string s;
	cin>>s;
	ll flag =0;
	for(i=0;i<s.length();i++) {
		if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9') {
			cout<<"YES"<<endl;
			flag =1;
			break;
		}
	}
	if(flag ==0)
		cout<<"NO"<<endl;
	
	return 0;

}