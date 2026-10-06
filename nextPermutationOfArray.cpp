#include<iostream>
#include<vector>
using namespace std;
void Karoreverse(int fd, int ld, vector<int>& v)
{
    int n=v.size();
    int temp,i,k;
    for(i=fd,k=ld;i<=k;i++,k--)
    {
        temp=v[i];
        v[i]=v[k];
        v[k]=temp;

    }
    return;
}
int main()
{
    int idx=-1;
    int i,n;
    cout<<"Enter n"<<endl;
    cin>>n;
    vector<int> num;
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    cout<<"Entered elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    //1) Finding pivot
    for(i=n-2;i>=0;i--)
    {
        if(num[i]<num[i+1])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        // reverse(num.begin(),num.end());
        Karoreverse(0,n-1,num);
    }
//2) sorting after finding pivot
    Karoreverse(idx+1,n,num);
//3)swapping idx and idx+1
    int temp=num[idx];
    num[idx]=num[idx+1];
    num[idx+1]=temp;
    for(i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
}