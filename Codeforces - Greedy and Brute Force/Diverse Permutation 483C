#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n,k;
  cin >> n >> k;
  int h = n,l = 1;
  bool flag = 0;
  for(int i = 0 ; i < k ; ++i)
  {
    if(!(i%2)) cout << h--,flag = 1;
    else cout << l++, flag = 0;
    cout << ' ';
  }
  for(int i=0;i<n-k;i++)
  {
    if(flag) cout << h-- << ' ';
    else cout << l++ << ' ';
  }
  cout << endl;
  return 0; 
}
