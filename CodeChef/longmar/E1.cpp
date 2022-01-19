#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,egg,choc,a,b,c,j=0;
		cin>>n>>egg>>choc>>a>>b>>c;

		int ome=0,shake=0,cake=0,item=0;
		int menu[] = {a,b,c};
		sort(menu,menu+3);

		while(egg>00 && choc>0 && j<3)
		{
			int mini = menu[j++];
			if(mini == a)
			{
				while(egg>2 )
				{
					ome++;
					item++;
					egg-=2;
				}
			}
			else if(mini == b)
			{
				while(choc>3 && item<n)
				{
					shake++;
					item++;
					choc-=3;
				}
			}
			else
			{
				while(egg>0 && choc>0 && item<n )
				{
					cake++;
					item++;
					egg--;
					choc--;
				}
			}
		}
		int price=0;
		if(item<n)
			cout<<"-1"<<endl;
		else
		{
			price = ome*a + shake*b + cake*c;
			cout<<price<<endl;
		}
		
	}

	return 0;
}