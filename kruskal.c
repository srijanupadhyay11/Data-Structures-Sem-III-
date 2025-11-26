#include <stdio.h>

#define MAX 30

struct Edge {
    int u, v, w;
} edges[MAX];

int find(int parent[], int x) {
    while (parent[x] != x)
        x = parent[x];
    return x;
}

void unionSet(int parent[], int x, int y) {
    int px = find(parent, x);
    int py = find(parent, y);
    parent[py] = px;
}

int main() {
    int n, e;
    int parent[MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter each edge (u v weight):\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    for (int i = 0; i < n; i++)
        parent[i] = i;

    for (int i = 0; i < e - 1; i++) {
        for (int j = i + 1; j < e; j++) {
            if (edges[i].w > edges[j].w) {
                struct Edge temp = edges[i];
                edges[i] = edges[j];
                edges[j] = temp;
            }
        }
    }

    printf("\nEdges in Minimum Spanning Tree:\n");
    int totalCost = 0;

    for (int i = 0; i < e; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        int parentU = find(parent, u);
        int parentV = find(parent, v);

        if (parentU != parentV) {
            printf("%d -- %d == %d\n", u, v, w);
            totalCost += w;
            unionSet(parent, parentU, parentV);
        }
    }

    printf("\nTotal cost of MST: %d\n", totalCost);

    return 0;
}
