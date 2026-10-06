#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    vector<int> v;
    int i,j,k;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    cout<<"Entered elements are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x,sum,count=0;
    cout<<"Enter x"<<endl;
    cin>>x;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
              sum=v[i]+v[j]+v[k];
              if(sum==x && i!=j && i!=k &&j!=k) count++;  
            }
        }
    }
    cout<<"No. of triplets whose sum is equal to "<<x<<" are ="<<count;

}