#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,m,a,b,i,j,k=1;

int main()
{
	fstream file1,file2;
	file1.open("traffic_control_validation_input.txt",ios::in);
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
						grid[i][j] = mini/(m+n-1);
				}
			}

			
			ll aa = a,bb = b,val;
			aa -= m*grid[0][0];
			bb -= m*grid[0][0];
			
			val = a - m*grid[0][0];
			for(i=1,j=m-1;i<n;i++)
			{
				if(i==n-1)
					grid[i][j] = aa;
				else {
					grid[i][j] = val/(n-1);
					aa -= grid[i][j];
				}

			}
			val = b - m*grid[0][0];
			
			for(i=1,j=0;i<n;i++)
			{
				if(i==n-1)
					grid[i][j] = bb;
				else {
					grid[i][j] = val/(n-1);
					bb -= grid[i][j];
				}

			}
			
			// for(i=0;i<n;i++)
			// {
			// 	for(j=0;j<m;j++)	
			// 	{
			// 		if(!(i==0 or j==0 or i == n-1 or j== m-1))
			// 			grid[i][j] = (rand()%1000 +1);
			// 	}
			// }
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