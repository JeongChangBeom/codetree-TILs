#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for(int i=0;i<n;i++){
        sum = 0;
        int a,b;
        cin >> a >> b;
        for(int j=a;j<=b;j++){
            if(j%2==0){
                sum += j;
            }
        }
        cout << sum; << '\n';
    }
    return 0;
}