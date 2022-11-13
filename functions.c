  s.erase(unique(s.begin(), s.end()), s.end()); //文字列内の重複完全削除
  sort(s.begin(),s.end(),greater<char>()); //ソート

