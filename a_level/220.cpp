#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
  int a,b,c;cin >> a >> b >> c;
  int ori_c = c;
  while(b>=c){
  if(c>=a){
  cout << c;
  return 0;
  }
  c += ori_c;
  }cout << "-1";
  }
