#include <iostream>

using namespace std;

template <typename T>
T sum(const T a, const T b) {
    return a + b;
}

template <typename T>
T mult(const T a, const T b) {
    return a * b;
}

int main() {
    cout << sum<int>(1, 2) << endl;
    cout << sum<float>(1.2, 2.6) << endl;
    cout << sum<string>("ciencia ", "de la computacion!") << endl;

    cout << mult<int>(1, 2) << endl;
    cout << mult<float>(1.2, 2.6) << endl;
    //cout << mult<string>("ciencia ", "de la computacion!") << endl;

    return 0;
}

