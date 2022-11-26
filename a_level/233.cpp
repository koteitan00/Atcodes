#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  int a,b;cin >> a >>b;
  int cnt = 0;
  if(a>=b){
  cout << 0;
  return 0;
  }
  else {
  while(a<b){
  a+=10;
  cnt++;
  }
  }
  cout << cnt;
  }
