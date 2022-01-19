//Red and Blue
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i;

string recur(string s,ll n,ll count) {
	if(count==0)
		return s;
	else if(count == n) {
		for(i=0;i<n;i++) {
			if(i%2==0)
				s[i] = 'B';
			else
				s[i] = 'R';
		}
		return s;
	}
	else {
		for(int i=0;i<n;i++) {
			if(s[i] == 'R' and s[i+1] == '?') {
				s[i+1] = 'B';
				count--;
			}
			if(s[i] == 'B' and s[i+1] == '?') {
				s[i+1] = 'R';
				count--;
			}
			if(s[i] == 'R' and s[i-1] == '?') {
				s[i-1] = 'B';
				count--;
			}
			if(s[i] == 'B' and s[i-1] == '?') {
				s[i-1] = 'R';
				count--;
			}

		}

		return recur(s,n,count);
	}
}

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		ll count =0 ;
		string s;
		cin>>s;
		for(i=0;i<n;i++) {
			if(s[i] == '?')
				count++;
		}
		cout<<recur(s,n,count)<<endl;


	}
	return 0;
}