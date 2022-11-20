#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int n;
  cin >> n;
  vector<char> v = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  cout << v[n/16] << v[n%16];
}
