#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int a[10];
  for(int i = 0;i < 5;i++){
  cin >> a[i];
  }
  sort(a,a+5);
  if(a[0] == a[2] && a[3] == a[4] || a[0] == a[1] && a[2] == a[4])cout << "Yes";
  else cout << "No";
}

