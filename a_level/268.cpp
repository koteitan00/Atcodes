#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
    vector<int> v(5);    //配列内の重複を削除するコード,要素数が指定されていない場合は適宜変更
    for (auto& num : v)  //vectorに収納する部分
	{
		cin >> num;
	}
    sort(v.begin(),v.end());
    int n=0;
    for(int i = 1;i < 5;i++){
    if(v[i]==v[i-1])n++;
    }
    cout << 5-n;
    
}

