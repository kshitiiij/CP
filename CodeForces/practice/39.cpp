//String Task
#include<bits/stdc++.h>
#include<limits>
using namespace std;
typedef long long int ll;
ll t,n,h,m,i;

int main()
{
	string s,ans ="";
	cin>>s;
	if(s[0]!='A' and s[0]!='E' and s[0]!='I' and s[0]!='O' and s[0]!='U' and s[0]!='Y' and s[0]!='a' and s[0]!='e' and s[0]!='i' and s[0]!='o' and s[0]!='u' and s[0]!='y')
		ans += '.';

	for(i=0;i<s.length()-1;i++) {
		if(s[i+1]!='A' and s[i+1]!='E' and s[i+1]!='I' and s[i+1]!='O' and s[i]!='U' and s[i]!='Y' and s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='y')
			
		if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='Y')
			s[i]='';
		else if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y')
			s[i]='';



	}
	return 0;

}