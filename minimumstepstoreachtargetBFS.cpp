#include<bits/stdc++.h>
using namespace std;
void bfs(int i, int j, int d[][9])
{
	queue <pair<int, int>> q;
	q.push(make_pair(i, j));
 
	while(!q.empty())
	{
		i=q.front().first;
		j=q.front().second;
		q.pop();
 
		if(i-2>=1 && j-1>=1)
		{
			if(d[i-2][j-1]>d[i][j]+1)
			{
				d[i-2][j-1]=d[i][j]+1;
				q.push(make_pair(i-2, j-1));
			}
 
		}
		if(i-2>=1 && j+1<=8)
		{
			if(d[i-2][j+1]>d[i][j]+1)
			{
				d[i-2][j+1]=d[i][j]+1;
				q.push(make_pair(i-2, j+1));
			}
 
		}
		if(i-1>=1 && j-2>=1)
		{
			if(d[i-1][j-2]>d[i][j]+1)
			{
				d[i-1][j-2]=d[i][j]+1;
				q.push(make_pair(i-1, j-2));
			}
 
		}
		if(i-1>=1 && j+2<=8)
		{
			if(d[i-1][j+2]>d[i][j]+1)
			{
				d[i-1][j+2]=d[i][j]+1;
				q.push(make_pair(i-1, j+2));
			}
 
		}
		if(i+2<=8 && j-1>=1)
		{
			if(d[i+2][j-1]>d[i][j]+1)
			{
				d[i+2][j-1]=d[i][j]+1;
				q.push(make_pair(i+2, j-1));
			}
 
		}
		if(i+2<=8 && j+1<=8)
		{
			if(d[i+2][j+1]>d[i][j]+1)
			{
				d[i+2][j+1]=d[i][j]+1;
				q.push(make_pair(i+2, j+1));
			}
 
		}
		if(i+1<=8 && j-2>=1)
		{
			if(d[i+1][j-2]>d[i][j]+1)
			{
				d[i+1][j-2]=d[i][j]+1;
				q.push(make_pair(i+1, j-2));
			}
 
		}
		if(i+1<=8 && j+2<=8)
		{
			if(d[i+1][j+2]>d[i][j]+1)
			{
				d[i+1][j+2]=d[i][j]+1;
				q.push(make_pair(i+1, j+2));
			}
 
		}
	}
}
int main()
{
	int n, m, i, j, c1, c2, r1, r2;
	int d[9][9];
	cin>>c1>>r1>>c2>>r2;
 
	for(i=1; i<=8; i++)
	{
		for(j=1; j<=8; j++)
		{
			d[i][j]=100000;
		}
	}
	d[r1][c1]=0;
	bfs(r1, c1, d);
	cout<<d[r2][c2];
}




https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/harry-and-ron-play-a-game-of-chess/