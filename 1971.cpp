class Solution {
public:

    int vis[10000005];
    bool check=false;
    void dfs(vector<vector<int>>& graph, vector<int>&visited, int source,int destination){
        vis[source]=1;
        if(source==destination){
            check = true;
            return;
        }
        for(auto child:graph[source]){
            if(!vis[child]){
                dfs(graph,visited,child,destination);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for(int i=0; i<edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visited(n, 0);
        dfs(graph, visited, source, destination);
        return check;
    }
};
