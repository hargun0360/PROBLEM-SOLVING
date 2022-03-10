#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 ll n; cin>>n;
 ll k=n;
 ll seven=0,four=0;
 while(k>0){
     ll r = k%10;
     if(r==7)
     seven++;
     else if(r==4)
     four++;
     k=k/10;
 }
 if(seven + four == 7 || seven + four == 4)
 cout<<"YES";
 else cout<<"NO";
 return 0;
}