#include <iostream>
#include <vector>
using namespace std;


vector<bool> visited;



void dfs(vector<vector<int>> rooms, int index){
	visited[index] = true;
	for(auto r: rooms[index]){
		if(!visited[index]){
			dfs(rooms,r);
		}
	}
}
bool canVisitAllRooms(vector<vector<int>> rooms, int n) {
        for(int i=0; i<n; i++){
            dfs(rooms,i);
            // if(!visited[i]){
            //     dfs(i);
            // }
        }
        int fal = 0;
        for (int j=0; j<n; j++){
            if(visited[j] == false){
                fal +=1;
            }
        }
        if (fal == 0){return true;}
        else {return false;}
}

int main(){
    visited.resize(4);
    for (int i=0; i<4; i++){
        visited[i] = false;
    }
    vector<vector<int>> rooms;
    rooms = {{2,3},{3,0,1},{2},{0}};
    bool ans = canVisitAllRooms(rooms,4);
    cout<<ans;
}