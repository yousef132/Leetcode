class Solution {
int cnt{};
public:
void dfs(long long  node  ,vector<vector<int>>&adj,vector<bool>&vis ){
    vis[node ] = true;
    cnt++;
    for(auto u :adj[node]){
        if(!vis[u]){
            dfs(u,adj,vis);
        }
    }
}
    
public :
long long countPairs(int n, vector<vector<int>>& edges) {
    vector<vector<int>>adj(n);
    for (auto & edge : edges) {
        int a =edge[0],b= edge[1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<long long >v;
    vector<bool>vis(n);
    for (int i = 0; i < n; ++i) {
        if(!vis[i]){
            dfs(i,adj,vis);
            v.push_back(cnt);
            cnt=0 ;
        }
    }
    long long  ans{};
    for (long long i : v) {
        ans+=i*(n-i);
        n-=i;
    }
    return ans;
}

};