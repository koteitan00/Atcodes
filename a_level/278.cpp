#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int n,x,a;
  cin >> n >> x;
  vector<int> v(n);
  for(int i=0;i<n;i++){
  if(i<x){
  cin >> a;
  }else cin >> v[i-x];
  }
  for(int i=0;i<n;i++){
  cout << v[i] << ' ';
  }
  }
