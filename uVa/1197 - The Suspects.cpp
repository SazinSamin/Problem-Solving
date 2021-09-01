#include <bits/stdc++.h>
using namespace std;
#define MAX 30000 + 5
int parent[MAX];
int Count[MAX];

void init(int u){
        for (int i = 0; i < u; i++{
                parent[i] = i;
                Count[i] = 1;
        }
}

int find(int u){
        if (u == parent[u]) return u;
        return parent[u] = find(parent[u]);
}

void Union(int u, int v){
        int p = find(u);
        int q = find(v);
        if (p != q){
                parent[q] = p;
                Count[p] += Count[q];
        }
}


int main(){
        freopen("file.txt", "r", stdin);
        int n, m;
        while (scanf("%d %d", &n, &m) && (n + m) > 0){
                init(n);
                while (m--){
                        int c;
                        scanf("%d", &c);
                        int f;
                        scanf("%d", &f);
                        c--;
                        while (c--){
                                int x;
                                scanf("%d", &x);
                                Union(f, x);
                        }
                }

                int v = find(0);
                int y = Count[v];
                printf("%d\n", y);
        }
}

