#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	ll flag =0;
	for(int i=0;i<s1.length();i++)
	{
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}


	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]==s2[i])
			flag =0;
		else if(s1[i]>s2[i]) {
			flag =1;
			break;
		}
		else if(s1[i]<s2[i]) {
			flag =-1;
			break;
		}
	}

	cout<<flag<<endl;
	return 0;
}