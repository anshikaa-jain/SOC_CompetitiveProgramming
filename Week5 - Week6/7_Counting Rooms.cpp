#include <iostream>
#include <vector>
using namespace std;

int n, m, rooms = 0;
vector<vector<bool>> visited;
 
vector<vector<int>> allowed_moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool valid(int x, int y){
	if(x<0 or x>=n or y<0 or y>=m)
		return false;
	if(visited[x][y])
		return false;
	return true;
}
void dfs(int i, int j){
	visited[i][j] = true;
	for(auto k: allowed_moves){
		if(valid(i+k[0], j+k[1])){
			dfs(i+k[0], j+k[1]);
		}
	}
}
void connected_components(){
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			if(!visited[i][j]){
				dfs(i,j);
				rooms += 1;
			}
		}
	}
}
 
int main(){
	cin>>n>>m;
	visited.resize(n);
 
	for(int i=0; i<n; ++i){
		visited[i].resize(m);
	}
 
	for (int i=0; i<n; ++i){
        cout<<"row"<<i+1<<endl;
		for (int j=0; j<m; ++j){
			char c; 
            cin>>c;
			if(c == '#'){
				visited[i][j] = true;
			}
            else{
                visited[i][j] = false;
            }
		}
	}
	connected_components();
	cout<<rooms<< endl; 
}