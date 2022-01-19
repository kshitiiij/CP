#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>


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

using namespace std;
int main()
{
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n;
		cin>>n;
		//string s = bin(n);
		//cout<<s;
		int a=10,b=7;
		if(a^b==n)
			cout<<(a^b);
		else
			cout<<"no";


	}
	return 0;
}