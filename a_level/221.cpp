#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
  int a,b;cin >> a >> b;
  int dis = a-b;
  long int ans = pow(32,dis);
  cout << ans;
}
