#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int dx = 0;
    int dy = 0;

    for(int i=0;i<N;i++){
        char cmd;
        cin >> cmd;

        if(cmd == 'W'){
            int num;
            cin >> num;
            dx -= num;
        }else if(cmd == 'S'){
            int num;
            cin >> num;
            dy -= num;
        }else if(cmd == 'N'){
            int num;
            cin >> num;
            dy += num;
        }else if(cmd == 'E'){
            int num;
            cin >> num;
            dx += num;
        }
    }

    cout << dx << " " << dy;
    return 0;
}