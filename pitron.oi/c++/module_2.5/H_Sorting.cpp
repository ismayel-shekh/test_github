#include<bits/stdc++.h>
using namespace std;
void king(int *ara,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ara[i]>ara[j])
            {
                swap(ara[i],ara[j]);
            }
        }
    }
    for(int i=0;i<n;i++) cout<<ara[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++) cin>>ara[i];
    // for(int i=0;i<n-1;i++){ 
    //     for(int j=i+1;j<n;j++){ 
    //      if(ara[i]>ara[j]) swap(ara[i],ara[j]);
         
    //     }
    // }
    
    king(ara,n);
    return 0;
}