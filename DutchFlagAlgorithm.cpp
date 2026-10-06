#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
        a=b;
        b=temp;
        return;
}
void sortColors(vector<int>& nums)
{
    int temp;
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(nums[mid]==2)
        {
            temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
        }
        else if(nums[mid]==0)
        {
            temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
    }

}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sortColors(v);
    for(int i=0;i<n;i++)
    {
        cout<<v.at(i)<<" ";
    }  
}