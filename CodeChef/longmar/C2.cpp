#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<cmath>

using namespace std;

string bin(int n)
{
	string s="";
	while(n!=0)
	{
		s+=to_string(n%2);
		n=n/2;
	}
	reverse(s.begin(),s.end());
	return s;

}

int num(string s)
{
	int n = stoi(s);
	int sum=0,m;
	for(int j=0;j<s.length();j++)
	{
		m = n%10;
		sum += m*pow(2,j);
		n=n/10;
	}
	return sum;

}

int main()
{
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,d=0;
		cin>>n;
		while(true)
		{
			if(n<pow(2,d))
				break;
			else
				d++;
		}
		
		string s = bin(n);	
		string a="",b="";
		for(int j=0;j<s.length();j++)
		{
			if(j==0)
			{
				a+='1';
				b+='0';
			}
			else
			{
				b+='1';
				if(s[j]=='0')
					a+='1';
				else
					a+='0';
			}
		}
		cout<<num(a)*num(b)<<endl;

	}
	return 0;
}