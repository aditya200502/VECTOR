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
    vector<int> v(10);
    v.push_back(7);
    vector<int> v1(4,3);    //firstly we will write size then which value we have to initialize.
    v1.push_back(8);
    printv(v);
    printv(v1);
    v1.pop_back();
    v.pop_back();
    printv(v);
    printv(v1);
    vector<int>v2=v1;
    printv(v2);
    return 0;
}