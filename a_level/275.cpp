#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int n;
  cin >> n;
  int ind, hi;
  ind = 0;
  hi = 0;
  int x=0;
  for(int i = 0;i < n;i++){
  cin >> x;
  if(x > hi){
    hi = x;
    ind = i;
  }
  }
  cout << ind+1;
  }
