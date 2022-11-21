#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  string s;
  cin >> s;
  reverse(s.begin(),s.end());
  int n = s.size();
  for(int i = 0;i<n;i++){
  if(s[i] == 'a'){
  int x=i;
  cout << n-i;
  return 0;
  }
  }
  cout << -1;
  }
