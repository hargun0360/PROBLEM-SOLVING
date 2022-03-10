#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
string s; cin>>s;
ll u=0,l=0;
for(auto c:s){
    if(isupper(c))
    u++;
    else l++;
}
if(u>l){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout <<s;
}
else{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
}

 return 0;
}