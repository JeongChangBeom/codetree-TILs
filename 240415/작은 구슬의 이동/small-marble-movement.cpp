#include <iostream>

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int n,t;
    cin >> n >> t;

    int r,c;
    char d;
    cin >> r >> c >> d;

    int rot_num = -999;

    if(d == 'R'){
        rot_num = 0;
    }
    else if(d == 'D'){
        rot_num = 1;
    }
    else if(d == 'L'){
        rot_num = 2;
    }
    else if(d == 'U'){
        rot_num = 3;
    }

    int next_r = r;
    int next_c = c;

    for(int i=0;i<t;i++){
        r += dy[rot_num];
        c += dx[rot_num];

        if(0<r && r<=n && 0<c && c<=n){
            next_r = r;
            next_c = c;
        }
        else{
            rot_num = (rot_num+2)%4;
            r = next_r;
            c = next_c;
        }
    }
    
    cout << r << " " << c;

    return 0;
}