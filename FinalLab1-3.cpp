Final lab 1 

  #include <iostream>
using namespace std;

int main() {
    int list[5] = {10, 20, 30, 40, 50};

    // Trying to open an invalid index
    cout << "Value at list[5]: " << list[5] << endl; // invalid index

    // Correct way
    for (int i = 0; i < 5; i++) {
        cout << "list[" << i << "] = " << list[i] << endl;
    }

    return 0;
}

Modified Version

#include <iostream>
using namespace std;

int main() {
    int list[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index (0–4): ";
    cin >> index;

    if (index >= 0 && index < 5) {
        cout << "Value = " << list[index] << endl;
    } else {
        cout << "Error: Index out of range!" << endl;
    }

    return 0;
}


Final lab 2

  
