#include<iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int>& digits)
{
    int n = digits.size();
    int i = n-1;
    while(i>0)
    {
        digits[i]++;
        if(digits[i]!=10) return digits;
        else
        {
            if(i!=0)
            {
                //digits.push_back(0);
                digits[i-1]++;
            }
            else{
                digits.push_back(0);
                digits[i]=1;
            }
        }
    }

}
    int main()
    {
        int n;
        cin>>n;
        vector<int> D;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            D.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            cout<<D[i]<<" ";
        }
        cout<<endl;
        D= plusOne(D);
        for(int i=0;i<n;i++)
        {
            cout<<D[i]<<" ";
        }
    }