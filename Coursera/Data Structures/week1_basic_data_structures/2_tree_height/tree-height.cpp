#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int generic_tree(int array[], int n, vector<int> tree[]);


int bfs(vector<int> g[], int visited[], int distances[], int source){
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        distances[source] = 1;
        int max = -99;

        while(!q.empty()){
                int current = q.front();
                q.pop();
                for(int i=0; i<g[current].size(); i++){
                        int next = g[current][i];
                        if(visited[next] == 0){
                                visited[next] = 1;
                                distances[next] = distances[current] + 1;
                                if(distances[next] > max){
                                        max = distances[next];
                                }
                                q.push(next);
                        }
                }
        }
        return max;
}



int main(){
        int length;
        cin>>length;
        int array[length];
        for(int i=0; i<length; i++){
                cin>>array[i];
        }

        vector<int> tree[length];
        int root_index;
        for(int i=0; i<length; i++){
                if(array[i] == -1){
                        root_index = i;
                }else{
                        tree[i].push_back(array[i]);
                        tree[array[i]].push_back(i);
                }
        }

        int visited[length+1];
        int distances[length+1];
        for(int i=0; i<length; i++){
                visited[i] =  0;
                distances[i] = 0;
        }

        int height = bfs(tree, visited, distances, root_index);
        cout<<height;
}



