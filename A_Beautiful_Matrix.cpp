#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){

    ll a[5][5];
    ll m,n;
    ll p,q;
    for(ll i=0 ; i<5 ; i++){
        for(ll j=0 ; j<5 ; j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                m=i+1;
                n=j+1;
            }
        }
    }
    p=abs(3-m);
    q=abs(3-n);
    cout<<p+q<<endl;

 
 return 0;
}