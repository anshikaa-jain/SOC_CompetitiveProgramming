#include <iostream>
#include <vector>
using namespace std;

int n, m;
int number_cc = 0;
vector<vector<int>> grid_connections;
vector<bool> visited;
vector<int> starting_element;

void dfs(int u)
{
	visited[u] = true;
	for(auto v: grid_connections[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

void connected_components(){
	for(int i=1; i <= n; ++i){
		if(!visited[i]){
			number_cc++;
			starting_element.push_back(i);
			dfs(i);
		}
	}
}

int main(){
	cin >> n >> m;
	grid_connections.resize(n+1);
	visited.resize(n+1);
	for(int i=0; i<m; ++i){
		cout<< "enter road a and b for " <<i+1<<endl;
		int u, v;
		cin >> u >> v;
		grid_connections[u].push_back(v);
		grid_connections[v].push_back(u);
	}

	connected_components();

	cout << number_cc-1 << endl;
	if(number_cc > 1){
		for(int i=1; i<number_cc; i++){
			cout<<starting_element[i-1]<<" "<<starting_element[i]<<endl;
		}
	}
}