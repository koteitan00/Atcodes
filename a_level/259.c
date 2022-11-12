#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x,t,d;
  cin >> n >> m >> x >> t >> d;  //t = hight at n's years old
  if(m >= x){                     //x < m < n or m < x < n
  cout << t;
  return 0;
  }else{
  int ta = x - m;
  int ans = t - (ta * d);
  cout << ans;
  }
 }
