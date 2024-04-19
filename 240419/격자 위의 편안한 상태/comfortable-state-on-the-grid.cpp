#include <iostream>

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int arr[100][100];

int main() {
    int N,M;
    cin >> N >> M;

    for(int i=0;i<M;i++){
        int r,c;
        cin >> r >> c;

        arr[r][c] = 1;

        int count = 0;

        for(int j=0;j<4;j++){
            int next_r = r+dx[j];
            int next_c = c+dy[j];
            if(next_r>0 && next_r<=N && next_c>0 && next_c<=N){
                if(arr[next_r][next_c] == 1){
                    count++;
                } 
            }
        }
        if(count == 3){
            cout << "1" << '\n';
        }
        else{
            cout << "0" << '\n';
        }
    }

    return 0;
}