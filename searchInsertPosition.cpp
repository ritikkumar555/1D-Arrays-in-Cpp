#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target)
{
        int n=nums.size();
        int i,idx=-1;
        if(target<nums[0]) return 0;
        else if(target>nums[n-1]) return n;
        else
        {
            for(i=0;i<n;i++)
            {
                if(nums[i]==target)
                {
                    idx=i;
                    break;
                }
                if(nums[i]!=target)
                {
                    if((target-nums[i])>=1 && (nums[i+1]-target)>=1)
                    {
                        idx=i+1;
                        break;
                    }
                }
            }
            return idx;
        }
     
}
int main()
{
    int n;
    cin>>n;
    int i;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter target"<<endl;
    int t;
    cin>>t;
    int k=searchInsert(v,t);
    cout<<"Index = "<<k;   
}