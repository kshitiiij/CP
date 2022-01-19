#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        int n,i,j;
        cin>>n;
        int L[n];
        for(i=0;i<n;i++)
            cin>>L[i];
        
        int min_ind,sum=0;
        
        for(i=0;i<=n-2;i++)
        {
            int min=1000000;
            for(j=i;j<=n-1;j++)
            {
                    if(L[j]<min)
                    {
                        min = L[j];
                        min_ind = j;
                    }
            }
            reverse(L+i,L+min_ind+1);
            sum = sum+ min_ind - i +1;
        }
        cout<<"Case #"<<k<<": "<<sum<<endl;
    }

    return 0;
}