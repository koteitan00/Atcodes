#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  string s;cin >> s;
  vector<int> v(s.size());
  for(int i = 0;i < 9;i++){
  v.at(i) = (int)(s[i] - '0');
  }
  int n = accumulate(v.begin(),v.end(),0);
  
  cout << 45 - n;
  }
