#include<bits/stdc++.h>
using namespace std;
#define N 4
#define M INT_MAX
void path_howing(int durotto[][N], int v, int u)
{
	if (durotto[v][u] == v)
		return;
	path_howing(durotto, v, durotto[v][u]);
	cout << durotto[v][u] << " ";
}
void shortpath(int khoroch[N][N], int durotto[N][N])
{
	for (int v = 0; v < N; v++)
	{
		for (int u = 0; u < N; u++)
		{
			if (u != v && durotto[v][u] != -1)
			{
				cout << "shobcheye choto" << v << " -> " << u << " is ("
					 << v << " ";
				path_howing(durotto, v, u);
				cout << u << ")" << endl;
			}
		}
	}
}
void all_path_shortest(int adjMatrix[][N])
{
	int khoroch[N][N],durotto[N][N];
	for (int v = 0; v < N; v++)
	{
		for (int u = 0; u < N; u++)
		{
			khoroch[v][u] = adjMatrix[v][u];

			if (v == u)
				durotto[v][u] = 0;
			else if (khoroch[v][u] != INT_MAX)
				durotto[v][u] = v;
			else
				durotto[v][u] = -1;
		}
	}
	for (int k = 0; k < N; k++)
	{
		for (int v = 0; v < N; v++)
		{
			for (int u = 0; u < N; u++)
			{

				if (khoroch[v][k] != INT_MAX && khoroch[k][u] != INT_MAX
					&& khoroch[v][k] + khoroch[k][u] < khoroch[v][u])
				{
					khoroch[v][u] = khoroch[v][k] + khoroch[k][u];
					durotto[v][u] = durotto[k][u];
				}
			}
			if (khoroch[v][v] < 0)
			{
				cout << "Eta negative, tai possible na";
				return;
			}
		}
	}
	shortpath(khoroch, durotto);
}

int main()
{
	int SA235[N][N] =
	{
		{ 0, M,	-2, M },
		{ 4, 0, 3, M },
		{ M, M, 0, 2 },
		{ M, -1, M, 0 }
	};
	all_path_shortest(SA235);

	return 0;
}
