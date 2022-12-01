#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  int s,t,x;
  cin >> s >> t >> x;
  if(s>=t){
  if(s<=x&&x<24)cout << "Yes";
  else if(0<=x&&x<t)cout << "Yes";
  else cout << "No";
  }else if(s<=x&&x<t){
  cout << "Yes";
  }else cout << "No";
}
