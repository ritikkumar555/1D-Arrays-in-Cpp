#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
void swapm2(vector<int>& v)
{
    int n=v.size();
    int i=0;
    int j=n-1;
    int temp;
    while(i<j)
    {
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i==j) break;
        else if(v[i]>0 && v[j]<0)
        {   
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;

        }
    }
    return;
}
int main()
{
    vector<int> v;
    int i,n;
    int nop=0,non=0;
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
    swapm2(v);
    cout<<"Sorted elements are"<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

}