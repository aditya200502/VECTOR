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
    vector<vector<int>> v;
    int N;
    cout<<"enter the size of outer vector::";
    cin>>N;
    for(int i=0;i<N;++i)
    {
        int n;
        cout<<"enter the size of inner vector at"<<i<<"position"<<endl;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<N;i++)
    {
       printv(v[i]);
    }
return 0;
}