#include <bits/stdc++.h>
//#include <boost/functional/hash.hpp>
//example: unordered_set< pair<int,int>,boost::hash< std::pair<int, int> > > used;
//priority_queue< pair<int,pair<int,int> >, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int> > > > pqueue;    //cost, vertex(行き先)
using namespace std;

#define MODULE 1000000007
#define MP make_pair
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second

template<class T,class U>inline void chmin(T &t,U f){if(t>f)t=f;}
template<class T,class U>inline void chmax(T &t,U f){if(t<f)t=f;}
template<typename A, size_t N, typename T>
inline void Fill(A (&array)[N], const T &val){ //usage: int dp[10][10]; Fill(dp,INF);
    std::fill( (T*)array, (T*)(array+N), val );
}

typedef pair<int, int> P;
typedef long long LL;
const int INF = INT_MAX / 2;    //int_max->2*e+9 LLの時はLLONG_MAX
/*const int MAXN = 100001;

struct edge {
    edge(int to, int cost) : to(to), cost(cost) {}
    int to, cost;
};
vector<edge> graph[MAXN];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};*/

//-----Template---------
int n,n1,n2;
int a[100010];
int main(){
    ios::sync_with_stdio(false); cout<< fixed << setprecision(10);
    cin>>n>>n1>>n2;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int> v;
    for (int i = 0; i < n1+n2; ++i) {
        v.push_back(a[n-1-i]);
    }
    sort(v.begin(),v.end());
    double sum1=0;
    int it=0;
    for (int i = 0; i < max(n1,n2); ++i) {
        sum1+=v[it];
        it++;
    }
    sum1/=max(n1,n2);
    double sum2=0;
    for (int i = 0; i < min(n1,n2); ++i) {
        sum2+=v[it];
        it++;
    }
    sum2/=min(n1,n2);
    cout<<sum1+sum2<<endl;

}