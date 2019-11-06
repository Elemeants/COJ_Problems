#include <iostream>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int index = input.find(" ");
    int A = atoi(input.substr(0, index).c_str());
    int B = atoi(input.substr(index, input.size() - 1).c_str());
    cout << A + B << "\n";
    return 0;
}