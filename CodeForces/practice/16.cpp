#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

string s;

int main()
{
	cin>>s;
	ll flag =0;
	char prev = s[0];

	for(int i=1;i<s.length();i++)
	{
		if(s[i] == prev) {
			flag++;
			prev = s[i];
		}
		else
		{
			flag =0;
			prev = s[i];
		}


		if(flag == 6) {
			cout<<"YES"<<endl;
			break;
		}
	}

	if(flag < 6)
		cout<<"NO"<<endl;
	// else
	// 	cout<<"YES"<<endl;

	// cout<<flag<<endl;
	return 0;
}