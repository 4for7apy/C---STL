#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void BFS(int startNode, vector<vector<int>> &adjList, int numNodes){
    vector<bool> visited(numNodes, false);
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    cout << "BFS Traversal: ";
    
    while(!q.empty()){
        int currentNode = q.front();
        q.pop();
        cout << currentNode << " ";

        for(int neighbor : adjList[currentNode]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main(){
    int numNodes = 6;
    vector<vector<int>> adjList(numNodes);

    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0, 4};
    adjList[3] = {1, 5};
    adjList[4] = {1, 2, 5};
    adjList[5] = {3, 4};

    int startNode = 0;
    BFS(startNode, adjList, numNodes);

    return 0;    
}