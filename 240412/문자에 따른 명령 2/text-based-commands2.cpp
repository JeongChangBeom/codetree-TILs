#include <iostream>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
    string str;
    cin >> str;

    int x = 0;
    int y = 0;

    int rot_num = 0;

    for(int i=0;i<str.size();i++){
        if(str[i] == 'R'){
            rot_num  = (rot_num + 1) % 4;
        }
        else if(str[i] == 'L'){
            rot_num  = (rot_num + 3) % 4;
        }
        else if(str[i] == 'F'){
            x += dx[rot_num];
            y += dy[rot_num];
        }
    }

    cout << x << " " << y;
    return 0;
}