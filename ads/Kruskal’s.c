#include <stdio.h>
#define INF 999
int stack[10];
int top = -1;
int pass = 0;
int cost[10][10];
int adj[10][10];
int visited[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int visited2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int n, no_edges = 0, total_cost = 0, min, a, b;
void push(int item);
int pop();
int dft(int s, int ccp);
void kruskal(int s);
int main()
{
    printf("Kruskal's Algorithm \n");
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter cost Adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
            {
                cost[i][j] = INF;
            }
            adj[i][j] = 0;
        }
    }
    kruskal(1);
}
void kruskal(int s)
{
    visited[s] = 1;
    printf("\nCosts:");
    while (no_edges < n - 1)
    {
        min = INF;
        a = 0;
        b = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                pass = 0;
                if (cost[i][j] < min)
                {
                    pass = dft(i, j);
                    if (pass != 1)
                    {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                    for (int i = 1; i <= n; i++)
                    {
                        visited2[i] = 0;
                    }
                    while (top > -1)
                    {
                        stack[top] = 0;
                        top--;
                    }
                }
            }
        }
        printf("%d--%d : %d\n", a, b, min);
        total_cost = total_cost + min;
        visited[a] = 1;
        visited[b] = 1;
        adj[a][b] = adj[b][a] = 1;
        cost[a][b] = cost[b][a] = INF;
        no_edges++;
    }
    printf("Total cost: %d", total_cost);
}
void push(int item)
{
    if (top == 9)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}
int pop()
{
    int val;
    if (top == -1)
    {
        return (0);
    }
    else
    {
        val = stack[top];
        top--;
        return (val);
    }
}
int dft(int s, int ccp)
{
    int p;
    push(s);
    visited2[s] = 1;
    p = pop();
    if (p != 0)
    {
        if (p == ccp)
        {
            return 1;
        }
    }
    while (p != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if ((adj[p][i] == 1) && (visited2[i] == 0))
            {
                push(i);
                visited2[i] = 1;
            }
        }
        p = pop();
        if (p != 0)
        {
            if (p == ccp)
            {
                return 1;
            }
        }
    }
    return 0;
}
