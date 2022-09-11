/******* BISMILLAHIR RAHMANIR RAHIM *******/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;


//TypeDEfN
typedef long long int ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;



typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;

//Constants

const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

// Macros
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vr(v) v.begin(),v.end()
#define fio(i,n) for(int i=1;i<=n;i++)
#define fiz(i,n) for(int i=0;i<n;i++)
#define fd(i,n) for(int i=n;i>=0;i--)
#define co(n) cout<<n<<endl
#define coy cout<<"Yes"<<endl
#define con cout<<"No"<<endl
#define ci(n) cin>>n
#define w(x) while(x--)
#define ci2(a,b) cin>>a>>b
#define ci3(a,b,c) cin>>a>>b>>c

#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define rvs(v) reverse(v.begin(),v.end());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MOD=1e9+7;
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
const int N=1e6+7;
int parent[N];
int Size[N];
int Rank[N];

void makeSet(int n){
    for (int i = 1; i <=n; i++){
    parent[i] = i;
     Size[i]=1;
     Rank[i]=0;
   }
}


int FindPar(int u){

    if (u == parent[u])
           return u;
//path compression
    return parent[u] = FindPar(parent[u]);
}

void Union(int u, int v)
{

    u = FindPar(u);
    v = FindPar(v);

    /*
    //union By Rank

    if(Rank[u] < Rank[v])
        {
    	parent[u] = v;
       }
    else if(Rank[v] < Rank[u])
        {
    	parent[v] = u;
         }
    else
    {
    	parent[v] = u;
    	Rank[u]++;
    }
    */
//union by size
    if(u!=v){

        if(Size[u]<Size[v])  swap(u,v);
         parent[v]=u;
         Size[u]+=Size[v];
    }
}

void solve()
{

           int a,b,r,c,q,x,y,f, m,s=0,n,cnt=0,ok=0,ya=0;
           string st;
           cin>>n;
    makeSet(n);
      int p1[3][n+1];

    for(int i=1;i<=2;i++)
    {

      for(int j=1;j<=n;j++)
      {

          cin>>p1[i][j];


      }
    }

      for(int i=1;i<=n;i++)
    {
        Union(p1[1][i],p1[2][i]);
    }
   int connected_com=0;
//joto gola root ase toto golai to connected component hobe
for(int i=1;i<=n;i++){

    if(FindPar(i)==i)
        connected_com++;
}

    cout<<modPow(2,connected_com)<<endl;


   }
int main(){

fastio;

int t,tc=0;
ci(t);

w(t){

   solve();


}
}

