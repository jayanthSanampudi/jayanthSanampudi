#include<iostream>
using namespace std;

int main() {
    cout << "Hello world   ";

    string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
    cars[0] = "Tata";

    for (int i = 0; i < 4; i++)
        cout << i << "=" << cars[i] << "\n";

    cout << cars[0];

    return 0;
}
