#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define elif else if
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define CLEAR(array, value) memset(ptr, value, sizeof(array));
#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pi(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
#define pn        printf("\n")
#define SZ(x)  (int)((x).size())
typedef long long LL;
const int N = 1005;
int a[N][N];
LL r[N], c[N], sr[N * 1000], sc[N * 1000];
int main()
{
  int te;
  scanf("%d",&te);
  while(te--)
  {
    memset(r,0,sizeof(r));
    memset(c,0,sizeof(c));
    memset(sr,0,sizeof(sr));
    memset(sc,0,sizeof(sc));
  int n, m, k, p;
  scanf("%d%d",&n,&k);
vector<int> qr, qc;
  m=n;
  p=1;
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
    {
      scanf("%d", &a[i][j]);
      r[i] += a[i][j];
      c[j] += a[i][j];
    }
  for (int i = 1; i <= n; ++i)  qr.pb(r[i]);
  for (int j = 1; j <= m; ++j)  qc.pb(c[j]);

  for (int i = 1; i <= k; ++i)
  {
    sort(qr.begin(),qr.end());
    sort(qc.begin(),qc.end());
    int t = qr[0];
    qr[0]=t + m * p;
    sr[i] = sr[i - 1] + t;
    t = qc[0];
    sc[i] = sc[i - 1] + t;
    qc[0]=(t + n * p);
  }
  LL ans = 1e18;
  for (int i = 0; i <= k; ++i)  ans = min(ans, sr[i] + sc[k - i] + (LL)i * (k - i) * p);
  cout<<ans<<"\n";
  }
  return 0;
}
