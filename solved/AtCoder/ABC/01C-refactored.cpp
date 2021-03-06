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
#define CONTAINS(x, y) (x.find(y)!=x.end()) //x<T1,T2>, T1 y
#define getPair(x) MP(x->first,x->second)

template<class T, class U>
inline void chmin(T &t, U f) { if (t > f)t = f; }

template<class T, class U>
inline void chmax(T &t, U f) { if (t < f)t = f; }

template<typename A, size_t N, typename T>
inline void Fill(A (&array)[N], const T &val) { //usage: int dp[10][10]; Fill(dp,INF);
    std::fill((T *) array, (T *) (array + N), val);
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

/**
 * 0-12
 * 18-90
 */
int deg, dis;
int power = 0;

bool c(int l,int r,int v){
    return l<=v && v<r;
}

int main() {
    ios::sync_with_stdio(false); //cout<< fixed << setprecision(10);
    //cout<<setw(4)<<setfill('0')<<"hoge"<<endl;
    cin >> deg >> dis;

    int data1[16]={0,15,93,201,327, //びみょーーー
                    477,645,831,1029,1245,
                    1467,1707,1959};

    for (int i = 0; i < 12; ++i) {
        if(data1[i]<=dis&&dis<data1[i+1]){
            power=i;
            break;
        }
        if(i==11){
            power=12;
            break;
        }
    }


    deg*=10;

    if(power==0){
        cout<<"C 0"<<endl;
    }else{
        int data2[16]={1125,3375,5625,7875,10125,   //2250間隔
                      12375,14625,16875,19125,21375,
                      23625,25875,28125,30375,32625,34875};
        string sdata[16]={"NNE","NE","ENE","E","ESE",
                          "SE","SSE","S","SSW","SW",
                          "WSW","W","WNW","NW","NNW","N"};
        string dir;
        for(int i=0;i<15;i++){
            //if(c(data[i],data[i+1],deg)){
            if(data2[i]<=deg && deg < data2[i+1]){
                dir=sdata[i];
                break;
            }
            if(i==14){
                dir=sdata[15];
                break;
            }
        }
        cout<<dir<<" "<<power<<endl;
    }

}