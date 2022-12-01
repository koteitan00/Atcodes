#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  string s; cin >> s;
  int n = 0;
  n= s.length();
  if(s[n-1]=='t')cout << "ist";
  else cout << "er";
}
