#include <iostream>

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int N;
    cin >> N;

    int x = 0;
    int y = 0;
    int rot_num;
    int result = 0;

    for(int i=0;i<N;i++){
        char rot;
        int dis;
        cin >> rot >> dis;

        if(rot == 'N'){
            rot_num = 0;
        }
        else if(rot == 'E'){
            rot_num = 1;
        }
        else if(rot == 'S'){
            rot_num = 2;
        }
        else if(rot == 'W'){
            rot_num = 3;
        }

        for(int j=0;j<dis;j++){
            x += dx[rot_num];
            y += dy[rot_num];
            result++;

            if(x==0 && y==0 && result!=0){
                cout << result;
                return 0;
            }
        }
    }
    cout << "-1";
}