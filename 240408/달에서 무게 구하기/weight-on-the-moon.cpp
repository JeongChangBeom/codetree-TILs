#include <iostream>

using namespace std;

int main() {
    cout << fixed;
    cout << precision(6);

    int weight = 13;
    float gravity = 0.165000;

    cout << weight << " * " << gravity << " = " << weight*gravity;

    return 0;
}