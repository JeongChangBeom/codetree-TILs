#include <iostream>
#include<string>

using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;

    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        if(x == 1){
            int y,z;
            cin >> y >> z;
            char temp;

            temp = s[y-1];
            s[y-1] = s[z-1];
            s[z-1] = temp;

            cout << s << '\n';
        }
        else if(x == 2){
            char y,z;
            cin >> y >> z;

            for(int j=0;j<s.size();j++){
                if(s[j] == y){
                    s[j] = z;
                }
            }
            
            cout << s << '\n';
        }
    }
    return 0;
}