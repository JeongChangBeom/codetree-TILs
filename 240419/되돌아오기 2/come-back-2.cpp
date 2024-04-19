#include <iostream>

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    string str;
    cin >> str;

    int x = 0;
    int y = 0;
    int rot_num = 0;
    int result = 0;

    for(int i=0;i<str.size();i++){
        if(str[i] == 'F'){
            x += dx[rot_num];
            y += dy[rot_num];

            result++;

            if(x==0 && y ==0){
                cout << result;
                return 0;
            }
        }
        else if(str[i] == 'L'){
            rot_num = (rot_num+3) % 4;
            result++;
        }
        else if(str[i] == 'R'){
            rot_num = (rot_num+1) % 4;
            result++;
        }
    }

    cout << "-1";

    return 0;
}