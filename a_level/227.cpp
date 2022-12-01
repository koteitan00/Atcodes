#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  int n,k,a;
  cin >> n >> k >> a;
  vector<int> v(k);
  for(int i = 0;i < k;i++){
  if(v[i-1]==n)a = 1;
  v[i] = a;
  a++;
  }cout << v[k-1];
}
