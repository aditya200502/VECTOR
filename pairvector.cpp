#include<bits/stdc++.h>
using namespace std;
void printv(vector<pair<int,int>> &v)
{
    cout<<"size::"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    //vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    //printv(v);
    int N;
    cout<<"enter the size of vector::";
    cin>>N;
    vector<pair<int,int>> v1(N);
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"enter the number of pairs::";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x,y;
            cin>>x>>y;
            v1.push_back({x,y});
        }
    }
    printv(v1);
    return 0;
}
