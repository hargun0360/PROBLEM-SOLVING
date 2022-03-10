#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            return false;
            break;
        }
    }
    if(flag==0){
        return true;
    }

}
 
int main(){
 ll n,m; cin>>n>>m;
 ll k=0;
 ll c=0;
 ll f=0;
     if(!isPrime(m)){
         cout<<"NO";
         exit(0);
     }
 for(ll j=n+1;j<=50;j++){
    if(isPrime(j)){
        if(j<m){
            cout<<"NO";
            exit(0);
        }
        if(j==m){
            f=1;
            cout<<"YES";
            exit(0);
        }
    }
}

if(f==0){
    cout<<"NO";
}

 
 return 0;
}