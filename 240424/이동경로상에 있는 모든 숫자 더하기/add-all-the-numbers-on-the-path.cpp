#include <iostream>
#include <string>

using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int arr[100][100];

int main() {
    int N,T;
    cin >> N >> T;

    string str;
    cin >> str;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }

    int x = N/2;
    int y = N/2;

    int rot_num = 0;

    int result = arr[x][y];

    for(int i=0;i<T;i++){
        if(str[i] == 'L'){
            rot_num = (rot_num+3)%4;
        }
        else if(str[i] == 'R'){
            rot_num = (rot_num+1)%4;
        }
        else if(str[i] == 'F'){
            int next_x = x + dx[rot_num];
            int next_y = y + dy[rot_num];

            if(next_x>=0 && next_x<N && next_y>=0 && next_y<N){
                x = next_x;
                y = next_y;
                result += arr[x][y];
            }
        }
    }

    cout << result;

    return 0;
}