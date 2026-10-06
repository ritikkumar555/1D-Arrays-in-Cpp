#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v1, vector<int>& v2)
{
    int i=0,j=0,k=0;
    int n=v1.size();
    int m=v2.size();
    vector<int> v3(m+n);
    while(i<=n-1 && j<=m-1)
    {
        if(v1[i]<v2[j])
        {
            v3[k]=v1[i];
            i++;
        }
        else{
            v3[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==n)
    {
        while(j<=m-1)
        {
            v3[k]= v2[j];
            k++;
            j++;
        }
    }
    if(j==m)
    {
        while(i<=n-1)
        {
            v3[k]=v1[i];
            k++;
            i++;
        }
    }
    return v3;

}
int main()
{
    int i=0;
    vector<int> v1;
    int n1,n2;
    cout<<"Enter n1 "<<endl;
    cin>>n1;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n1;i++)
    {   
        int d;
        cin>>d;
        v1.push_back(d);
    }
    cout<<"The elements are "<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Enter n2"<<endl;
    cin>>n2;
    vector<int> v2;
    cout<<"Enter other elements"<<endl;
    for(i=0;i<n2;i++)
    {
        int d;
        cin>>d;
        v2.push_back(d);
    }
    cout<<"The elements of another array are "<<endl;
    for(i=0;i<v2.size();i++)
    {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
    vector<int> v = merge(v1,v2); 
    for(i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    //cout<<"  Size of v2 = "<<v2.size();
}