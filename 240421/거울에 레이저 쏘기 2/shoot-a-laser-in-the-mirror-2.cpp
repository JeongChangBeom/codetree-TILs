#include <iostream>

using namespace std;

char arr[1001][1001];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        string str;
        cin >> str;
        for(int j=0;j<str.size();j++){
            arr[i][j] = str[j];
        }
    }

    int K;
    cin >> K;

    int x,y;
    int rot_num;

    if(K<=N){
        x = 0;
        y = K-1;
        rot_num = 1;
    }
    else if(K>N && K<=2*N){
        x = (K-1)%N;
        y = N-1;
        rot_num = 2;
    }
    else if(K>2*N && K<=3*N){
        x = N-1;
        y = N-1 - ((K-1)%N);
        rot_num = 3;
    }
    else if(3>N && K<=4*N){
        x = N-1 - ((K-1)%N);
        y = 0;
        rot_num = 0;
    }

    int count = 0;

    while(true){
        if(arr[x][y] == '/'){
            count++;
            rot_num = 3 - rot_num;
        }
        else if(arr[x][y] == '\\'){
            count++;
            rot_num = (5 - rot_num) % 4;
        }

        x += dx[rot_num];
        y += dy[rot_num];

        if(x<0 || x>=N || y<0 || y>=N){
            break;
        }
    }

    cout << count;

    return 0;
}