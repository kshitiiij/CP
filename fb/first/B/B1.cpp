#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,m,a,b,i,j,k=1;

int main()
{
	fstream file1,file2;
	file1.open("traffic_control_input.txt",ios::in);
	file2.open("output.txt",ios::out);
	string s;
	file1>>s;
	t = stoi(s);
	//cin>>t;
	while(t--)
	{
		file1>>s; n = stoi(s);
		file1>>s; m = stoi(s);
		file1>>s; a = stoi(s);
		file1>>s; b = stoi(s);
		
		ll grid[n][m];
		memset(grid,0,sizeof(grid));
		ll mini = min(a,b);
		if(a<(n+m-1) or b<(n+m-1))
			file2<<"Case #"<<k<<": Impossible"<<endl;
		else
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					if(i==0 or j==0 or i == n-1 or j== m-1)
						grid[i][j] = 1;
					else
						grid[i][j] = 999;
				}
			}

			grid[0][0] = a - (n+m-2);
			grid[0][m-1] = b - (n+m-2);

			
			
			
			
			file2<<"Case #"<<k<<": Possible"<<endl;
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)	
					file2<<grid[i][j]<<" ";
				file2<<endl;
			}
		}

			

		k++;
	}

	file1.close();
	file2.close();
	return 0;
	
	
}