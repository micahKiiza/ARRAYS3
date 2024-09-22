
#include <iostream>
using namespace std;

int main() {
    int grades[5] = {85, 90, 76, 88, 95}; // Array to store 5 grades
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i+1 << ": " << grades[i] << endl;
    }
    return 0;
}
