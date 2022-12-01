#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;
int f(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main(){
  string s; cin >> s;
  sort(s.begin(),s.end());
  int n = 1;
  for(int i = 1;i<3;i++){
  if(s[i]==s[i-1])n++;
  }
  cout << f(3)/f(n); //6,3,1
}
