#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  string s1,s2,S1,S2;
  cin >> s1 >> s2;
  if(s1=="#."&&s2==".#")cout << "No";
  else if(s1==".#"&&s2=="#.")cout << "No";
  else cout << "Yes";
}
