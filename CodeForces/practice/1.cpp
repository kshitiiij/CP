#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		string s,change;
		cin>>s;
		long long len = s.length();
		long long index;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='a')
			{
				index = i;
				break;
			}
		}


		if(index==0||index==len-1)
		{
			if(len>1)
			{
				change = s.substr(0,(len/2)) + 'a' + s.substr(len/2,len-1);
			}
			else
			{
				change = s + 'a';
			}
		}	
		else
		{
			change = 'a'+ s ;
		}
		

		if((len+1)%2==0 && len>1)
		{
			string rev = change.substr((len+1)/2,len);
			reverse(rev.begin(),rev.end());
			string first = change.substr(0,((len+1)/2-1));
			

			if(first==rev)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl<<change<<endl;

			
		}
		else if((len+1)%2==0 && len==1)
		{
			char rev = change[1];
			char first = change[0];
		

			if(first==rev)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl<<change<<endl;
		}
		else
		{
			string rev = change.substr((len+1)/2,len);
			reverse(rev.begin(),rev.end());
			string first = change.substr(0,((len+1)/2-1));

			if(change.substr(0,len/2)==rev)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl<<change<<endl;
		}

	}
	return 0;
}