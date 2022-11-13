#include <bits/stdc++.h> //この量だったらifで強引にやった方楽そう
#include <string>      //文字列が長い場合はforで回す:wq
using namespace std;  // wwx xyy xxx xyx
int main(){
  string s; cin >> s;
  int n = s.size();
  char s1 = s[0];
  int cnt = 2;
  for(int i=1; i<=n;i++){
  if(s1 == s[i]){
    if(s[i] == s[i+1]){
      cout << -1; 
      return 0;
    }
    cout << s[cnt];  //s1,s[i]以外の文字を出力したい
    return 0;
   }
   cnt--;
  }
  cout << s[0];
}
