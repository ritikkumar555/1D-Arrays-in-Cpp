#include<iostream>
#include<vector>
using namespace std;
int addDigits(int num)
    {
        int sum=0;
        if(num==0) return 0;
        else
        {
            int k,d;
            for(k=num;k>0;k=k/10)
            {
                d=k%10;
                sum=sum+d;
                if(sum>9)
                {
                    num=sum;
                    sum=0;
                }
            }
            return sum;
        }
    }
    int main()
    {
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        int k=addDigits(n);
        cout<<k;
    }