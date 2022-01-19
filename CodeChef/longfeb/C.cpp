#include <iostream>
using namespace std;

int main() 
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        string time,time1,time2,half,half1,half2;
        string out="";
        //string start,end;
        // cin>>time>>half;
        // cout<<time<<" "<<half;

        cin>>time>>half;
        int n,j;
        cin>>n;
        //char peep[n][2];
        // for(j=0;j<n;j++)
        // {
        //     cin>>peep[j][0];
        //     cin>>peep[j][1];
        // }
        for(j=0;j<n;j++)
        {
            cin>>time1>>half1>>time2>>half2;

            if(half1==half2)
            {
                if(half1=half)
                {
                    if(int(time1[0:2])<int(time[0:2]) && int(time[0:2])<int(time2[0:2]))
                    {

                    }
                }
            }
            
        }
        
    }
	return 0;
}
