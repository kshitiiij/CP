#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		char str[n];
		for(int i=0;i<n;i++)
			cin>>str[i];

		int start=-1,end,hold=0,move=0,change=0;
		for(int i=0;i<n;i++)
		{
			if(start==-1 && str[i]=='*')
			{
				start=i;
				str[i]='x';
				change = i;
				move++;
				hold=i;
				end = i;
			}

			
			if(str[i]=='*'&&(i-change)<k)
			{
				hold = i;
				end = i;
			}

			else if(str[i]=='*'&& (i-change)==k)
			{
				str[i]='x';
				move++;
				change=i;
				hold = i;
				end = i;
			}

			else if(str[i]=='*'&&(i-change)>k)
			{
				str[hold]='x';
				change = hold;
				hold =i;
				move++;
				end = i;
			}

		}
		if(start!=end && str[end]!='x')
		{
			str[end]='x';
			move++;
		}
		cout<<move<<endl;

	}
	return 0;
}