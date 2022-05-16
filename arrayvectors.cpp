#include<bits/stdc++.h>
using namespace std;
void printv(vector<int> &v)
{
    cout<<"the size is::"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v[5];
    for(int i=0;i<5;i++)
    {
        int n;
        cout<<"enter value of n";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<5;i++)
    {
        printv(v[i]);
    }
    return 0;
}