#include <iostream>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int arr[101][101];

int main() {
    int n;
    cin >> n;

    int x = n-1;
    int y = n-1;

    arr[x][y] = n*n;

    int rot_num = 0;

    for(int i=n*n-1;i>=1;i--){
        int next_x = x+dx[rot_num];
        int next_y = y+dy[rot_num];

        if(!(next_x>=0 && next_x<=n && next_y>=0 && next_y<=n) || arr[next_x][next_y] != 0){
            rot_num = (rot_num+1)%4;
        }

        x += dx[rot_num];
        y += dy[rot_num];
        arr[x][y] = i;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}