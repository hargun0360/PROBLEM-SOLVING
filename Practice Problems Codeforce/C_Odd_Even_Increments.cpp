#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool sameParityforall(vector<int> vec)
{
    int par = vec[0] % 2; 
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] % 2 != par)
        {
            return false;
        }
    }
    return true;
}
bool oddEvenparity(vector<int> vec)
{
    
    for (int i = 1; i < vec.size(); i++)
    {
        if(vec[i-1]%2==vec[i]%2)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int size;
        cin>>size;
        vector<int> vec;
        for (int i = 0; i < size; i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        if(sameParityforall(vec))
        {
            cout<<"YES\n";
        }
        else 
        {
            if(oddEvenparity(vec))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}