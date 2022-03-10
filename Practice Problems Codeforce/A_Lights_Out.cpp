#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 bool arr[3][3];
 bool set=false;
 for(ll i=0;i<3;i++){
     for(ll j=0;j<3;j++){
         arr[i][j] = set;
     }
 }
 ll val00=0,val01=0,val02=0,val10=0,val11=0,val12=0,val20,val21=0,val22=0;
 ll a11,a12,a13,a21,a22,a23,a31,a32,a33;
 cin>>a11>>a12>>a13>>a21>>a22>>a23>>a31>>a32>>a33;
         if(a11%2==1){
            val00++;
            val01++;
            val10++;
            val11++;
             arr[0][0]=val00%2==1 ? 0 : 1;
             arr[0][1]=val00%2==1 ? 0 : 1;
             arr[1][0]=val00%2==1 ? 0 : 1;
             arr[1][1]=val00%2==1 ? 0 : 1;
         }
         if(a12%2==1){
                val00++;
                val11++;
                val02++;
                val01++;
             arr[0][0]=val00%2==1 ? 0 : 1;
             arr[0][2]=val02%2==1 ? 0 : 1;
             arr[0][1]=val01%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
         }
         if(a13%2==1){
                val01++;
                val11++;
                val02++;
                val12++;
             arr[0][2]=val02%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
             arr[0][1]=val01%2==1 ? 0 : 1;
             arr[1][2]=val12%2==1 ? 0 : 1;
         }
         if(a21%2==1){
                val00++;
                val11++;
                val20++;
                val10++;
             arr[0][0]=val00%2==1 ? 0 : 1;
             arr[2][0]=val20%2==1 ? 0 : 1;
             arr[1][0]=val10%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
         }
         if(a22%2==1){
                val00++;
                val01++;
                val02++;
                val10++;
                val11++;
                val12++;
                val20++;
                val21++;
                val22++;
             arr[0][0]=val00%2==1 ? 0 : 1;
             arr[0][1]=val01%2==1 ? 0 : 1;
             arr[0][2]=val02%2==1 ? 0 : 1;
             arr[1][0]=val10%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
             arr[1][2]=val12%2==1 ? 0 : 1;
             arr[2][0]=val20%2==1 ? 0 : 1;
             arr[2][1]=val21%2==1 ? 0 : 1;
             arr[2][2]=val22%2==1 ? 0 : 1;
         }
         if(a23%2==1){
                val12++;
                val11++;
                val02++;
                val22++;
             arr[0][2]=val02%2==1 ? 0 : 1;
             arr[1][2]=val12%2==1 ? 0 : 1;
             arr[2][2]=val22%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
         }
         if(a31%2==1){
             val21++;
                val11++;
                val20++;
                val10++;
             arr[2][1]=val21%2==1 ? 0 : 1;
             arr[2][0]=val20%2==1 ? 0 : 1;
             arr[1][0]=val10%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
         }
         if(a32%2==1){
             val22++;
                val11++;
                val20++;
                val21++;
             arr[2][1]=val21%2==1 ? 0 : 1;
             arr[2][0]=val20%2==1 ? 0 : 1;
             arr[2][2]=val22%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
         }
         if(a33%2==1){
             val22++;
                val11++;
                val21++;
                val12++;
             arr[2][2]=val22%2==1 ? 0 : 1;
             arr[2][1]=val21%2==1 ? 0 : 1;
             arr[1][2]=val12%2==1 ? 0 : 1;
             arr[1][1]=val11%2==1 ? 0 : 1;
         }

    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
 return 0;
}