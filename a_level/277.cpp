#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int n,x,a;
  cin >> n >> x;
  for(int i = 0;i < n;i++){
  cin >> a;
  if(a == x){
  cout << i+1;
  return 0;
  }
  }
  }
