//Problem Link:
//https://www.hackerrank.com/challenges/arrays-introduction/problem
//Solution:

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
void solve()
{
   //Code Here
   int n;
   cin >> n;
   
   vector<int> v(n);
   for(auto &it: v)
      cin >> it;
      
      reverse(v.begin(), v.end());
      
      for(auto &it: v){
        cout << it << " ";
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