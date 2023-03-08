#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int n;
int help (int x){
  int tp = n-x,sum=0;
  while(tp){
    sum += (tp%10);
    tp /= 10;
  }
  return sum == x;
}
int main()
{
  Mo7amed_Alaa
  
  cin >> n;
  vector<int> ans;
  for (int i = 100 ; i  ; --i){
    if (help(i))
      ans.push_back(n-i);
  }
  cout << ans.size() << endl;
  for(auto x : ans) cout << x << endl;
  return 0; 
} 
