//Dubstep
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,k,i;

int main()
{
	string s1,s2 = "";
	ll flag =0;
	cin>>s1;
	for(i=0;i<s1.length();i++) {
		if(s1.substr(i,3) != "WUB") {
			s2 += s1[i];
			flag =1;
		}
		else {
			if(flag==1) {
				s2 += " ";

			}
			flag =0;
			i +=2;
		}
	}

	cout<<s2<<endl;
	
	return 0;

}