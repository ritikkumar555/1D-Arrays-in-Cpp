#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    vector<int> v;
    int i,n;
    int noz=0,noo=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Entered elements are"<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==0) noz++;
        else noo++;
    }
    for(i=0;i<n;i++)
    {
        if(i<noz)
            v[i]=0;
        else
            v[i]=1;
    }
    cout<<"Elements after sorting are"<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

}