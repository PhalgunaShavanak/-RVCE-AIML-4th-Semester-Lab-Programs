8b
#include <stdio.h>
#include <limits.h>
 
#define N 4
 
int costMatrix[N][N];
int assigned[N];
int minCost = INT_MAX;
 
void assignJobs(int worker, int currentCost)
{
    if (worker == N)
    {
        if (currentCost < minCost)
        {
            minCost = currentCost;
        }
        return;
    }
    for (int job = 0; job < N; job++)
    {
        if (!assigned[job])
        {
            assigned[job] = 1;
            assignJobs(worker + 1, currentCost + costMatrix[worker][job]);
            assigned[job] = 0;
        }
    }
}
 
int main()
{
    printf("Enter the cost matrix (%dx%d):\n", N, N);
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &costMatrix[i][j]);
        }
    }
 
    for (int i = 0; i < N; i++)
    {
        assigned[i] = 0;
    }
 
    assignJobs(0, 0);
    printf("Minimum cost: %d\n", minCost);
 
    return 0;
}

