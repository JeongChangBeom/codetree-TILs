#include <iostream>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0}; 

int arr[100][100];

int main() {
    int n,m;

    cin >> n >> m;

    int x=0;
    int y=0;
    int rot_num=0;

    arr[x][y] = 1;

    for(int i=2;i<=n*m;i++){
        int next_x = x + dx[rot_num];
        int next_y = y + dy[rot_num];

        if(!(next_x>=0 && next_x<n && next_y>=0 && next_y<m ) || arr[next_x][next_y] != 0){
            rot_num = (rot_num+1)%4;
        }

        x += dx[rot_num];
        y += dy[rot_num];

        arr[x][y] = i;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}