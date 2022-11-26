#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int ft(int t){
	int ans = pow(t,2)+2*t+3;
    return ans;
}

int main(){
  int t;cin >> t;
  int s = ft(ft(ft(t)+t)+ft(ft(t)));
  cout << s;
  }
