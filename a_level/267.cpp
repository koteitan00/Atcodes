#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
    vector<string> w = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
    string day;
    cin >> day;
    vector<string>::iterator itr = find(w.begin(),w.end(),day);
    int rest = distance(w.begin(),itr);
    cout << 5 - rest;
}

