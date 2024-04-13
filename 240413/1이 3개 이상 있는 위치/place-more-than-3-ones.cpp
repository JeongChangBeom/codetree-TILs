#include <iostream>

using namespace std;

int arr[100][100];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    int result = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int count = 0;
            for(int rot_num = 0; rot_num < 4; rot_num++){
                int nx = dx[rot_num] + i;
                int ny = dy[rot_num] + j;

                if(((nx>=0 && nx<100) && (ny>=0 && ny<100)) && arr[nx][ny] == 1){
                    count++;
                }
            }
            if(count >= 3){
                result++;
            }
        }
    }

    cout << result;

    return 0;
}