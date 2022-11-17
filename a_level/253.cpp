#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int a[100]; //要素数が変わらない場合は配列でもOK?
  for(int i = 0;i < 3;i++){
  cin >> a[i];
  }
  int mid = a[1];
  sort(a,a+3);
  if(a[1]==mid)cout << "Yes";
  else cout << "No";
}

  
