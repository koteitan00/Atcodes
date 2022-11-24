#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  vector<int> v(10);
  for(int i = 0;i < 10;i++){
  cin >> v[i];
  }
  int n = v[0];
  cout << v[v[n]];
  }
