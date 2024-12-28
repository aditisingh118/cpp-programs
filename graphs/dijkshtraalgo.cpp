#include<iostream>
#include<limits>
# define v 5
using namespace std;

void dijkstra()
{
}
int main()
{
    
	int graph[V][V] = { { 0, 4, 0, 0, 3 },
						{ 4, 0, 8, 0, 0 },
						{ 0, 8, 0, 7, 0},
						{ 0, 0, 7, 0, 9},
						{ 3, 0, 0, 9, 0 } };

	dijkstra(graph, 0);

	return 0;
    


















