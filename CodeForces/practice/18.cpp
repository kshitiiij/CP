#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	string s,s1="";
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='+')
			s1 += s[i];
	}

	sort(s1.begin(),s1.end());
	s = "";
	for(int i=0;i<s1.length();i++)
	{
		if(i!=s1.length()-1)
			s = s + s1[i] + "+";
		else
			s = s + s1[i]; 

	}
	cout<<s<<endl;
	return 0;
}