//Problem Link
//https://atcoder.jp/contests/abc335/tasks/abc335_b?lang=en
//Solution:

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
void solve()
{
   //Code Here
   int n;
   cin >> n;
   
   for(int i=0;i<=n;i++){
     
     for(int j=0;j<=n;j++){
       for(int k=0;k<=n;k++){
         
         if(i+j+k <= n){
           cout << i << " " << j << " " << k << endl;
         }else{
           continue;
         }
         
         
       }
     }
     
     
   }
  
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // ll t;
    // cin >> t;
    // while(t--)
    // {
      solve();
    // }
 
    
    return 0;
}
