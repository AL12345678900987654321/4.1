#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    double result = 1.0;

    cout << "N = "; cin >> N;

    // while цикл
    int i = N;
    while (i <= 16) {
        result *= i * N / (pow(i, 2) + pow(N, 2));
        i++;
    }
    cout << "While: " << result << endl;

    // do-while цикл
    i = N;
    result = 1.0;
    do {
        result *= i * N / (pow(i, 2) + pow(N, 2));
        i++;
    } while (i <= 16);
    cout << "do-while: " << result << endl;

    // for цикл (++)
    i = N;
    result = 1.0;
    do {
        result *= i * N / (pow(i, 2) + pow(N, 2));
        i++;
    } while (i <= 16);
    cout << "For (++): " << result << endl;

    // for цикл (--)
    result = 1.0;
    for (i = 16; i >= N; i--) {
        result *= i * N / (pow(i, 2) + pow(N, 2));
    }
    cout << "For (--): " << result << endl;

    return 0;
}