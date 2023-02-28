#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    //creating an adjlist -
    unordered_map<int,list<int>>adj;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //finding indegree of each element -
    vector<int>indegree(v);
    for(auto i:adj){
        for(j:i.second){
            indegree[j]++;
        }
    }

    //create a queue and find element having 0 indegree-
    queue<int>q;
    for(int i=0;i<v;i++){
        if(indegree[i] ==0){
            q.push(i);
        }
    }

    // do bfs 
    vector<int>ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        //storing in ans -
        ans.push_back(front);

        //updating the neigbour -
        for(auto neigbour:adj[front]){
            indegree[neigbour]--;

            if(indegree[neigbour]==0){
                q.push(neigbour);
            }
        }
    }
    return ans;

}