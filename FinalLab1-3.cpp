Final lab 1 - Array Index and Bounds

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


Final lab 2 - Array Initialization

#include <iostream>
using namespace std;

int main() {
    double sales[] = {12.25, 32.50, 16.90, 23.00, 45.68};
    int size = sizeof(sales) / sizeof(sales[0]);
    double total = 0;

    cout << "Sales values: ";
    for (int i = 0; i < size; i++) {
        cout << sales[i] << " ";
        total += sales[i];
    }

    double average = total / size;
    cout << "\nAverage Sales: " << average << endl;

    return 0;
}

Modified Version

#include <iostream>
using namespace std;

int main() {
    double sales[5] = {12.25, 32.50, 16.90};
    int size = sizeof(sales) / sizeof(sales[0]);
    double total = 0;

    cout << "Sales values: ";
    for (int i = 0; i < size; i++) {
        cout << sales[i] << " ";
        total += sales[i];
    }

    double average = total / size;
    cout << "\nAverage Sales: " << average << endl;

    return 0;
}

Final Lab 3 - Partial Initialization

#include <iostream>
using namespace std;

int main() {
    // Array declarations
    int list1[10] = {0};
    int list2[10] = {8, 5, 12};
    int list3[3] = {5, 6, 3};
    int list4[25] = {4, 7};

    cout << "List 1: ";
    for (int i = 0; i < 10; i++)
        cout << list1[i] << " ";
    cout << endl;

    cout << "List 2: ";
    for (int i = 0; i < 10; i++)
        cout << list2[i] << " ";
    cout << endl;

    cout << "List 3: ";
    for (int i = 0; i < 3; i++)
        cout << list3[i] << " ";
    cout << endl;

    cout << "List 4: ";
    for (int i = 0; i < 25; i++)
        cout << list4[i] << " ";
    cout << endl;

    return 0;
}
