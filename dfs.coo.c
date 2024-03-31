#include <bits/stdc++.h>

usign namespace std;


#define DIM 100008

vector<int> a[DIM];
long long ARR[DIM];


void dfs(int v)
{
	used[village] = 1;
	++c;

	for(auto otherVillege : a[v])
	{
		if(used[otherVillege]
			== 0) dfs(otherVillege)
		}
}


int main(){

	cin >> villages>> roads;

	for(int i = 1; i <= roads; ++i)
	{
		cin >> v1 >> v2;
		a[v1].push_back(v2);
		a[v2].push_back(v1);
	}


	c = 0;

	dfs(1);
	return 0;
}
