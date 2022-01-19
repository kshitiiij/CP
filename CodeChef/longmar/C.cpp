#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<cmath>

using namespace std;

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
		
		int max=0;
		for(int a=0;a<pow(2,d);a++)
		{
			for(int b=0;b<pow(2,d);b++)
			{
				if((a^b)==n)
				{
					if(max<a*b)
						max= a*b;
				}
			}
		}

		int a=0;
		for(int b=0;b<pow(2,d);b++)
		cout<<max<<endl;


	}
	return 0;
}