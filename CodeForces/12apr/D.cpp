#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	char lett[k];
	string s="";
	string st = "";
	for(int i=0;i<k;i++)
	{
		lett[i] = 97+i;
	}

	// for(int i=0;i<k;i++)
	// 	cout<<lett[i];
	// cout<<endl;

	int index;
	int num = n/2;
	while(num--)
	{
		index = 0+ rand()%(k-1-0+1);
		s+=lett[index];
	}
	if(n%2==0)
	{
		st = s;
		reverse(s.begin(),s.end());
		st+= s;
	}
	else
	{	
		st = s;
		reverse(s.begin(),s.end());
		st+=s;
		index = 0+ rand()%(k-1-0+1);
		st = st + lett[index];
	}
	cout<<st<<endl;
	return 0;

}