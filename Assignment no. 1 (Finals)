Lab 1 – Exploring Relational Operators

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 5;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != c: " << (a != c) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "b > c: " << (b > c) << endl;
    cout << "(a + c) <= b: " << ((a + c) <= b) << endl;

    // Character comparison
    cout << "'A' < 'a': " << ('A' < 'a') << endl;

    return 0;
}

Lab 2 – One-Way Selection (if Statement)

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

  
    if (num > 0)
        cout << "The number is positive." << endl;

    return 0;
}

Lab 3 – Two-Way Selection (if...else Statement)

#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 75)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    return 0;
}

Lab 4 – Compound Statements

#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 75) {
        cout << "Result: Pass" << endl;
        cout << "Congratulations!" << endl;
        cout << "Keep up the good work." << endl;
    } else {
        cout << "Result: Fail" << endl;
    }

    return 0;
}

Lab 5 – Nested if Statements

#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 75) {  
        if (grade >= 90)
            cout << "Remark: Excellent" << endl;
        else if (grade >= 80)
            cout << "Remark: Very Good" << endl;
        else
            cout << "Remark: Satisfactory" << endl;
    } else {
        cout << "Remark: Fail" << endl;
    }

    return 0;
}

Lab 6 – Switch Structure

#include <iostream>
using namespace std;

int main() {
    int choice;
    double radius, length, width, area;

    cout << "=== Simple Menu ===" << endl;
    cout << "1. Compute Area of Circle" << endl;
    cout << "2. Compute Area of Rectangle" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.1416 * radius * radius;
            cout << "Area of Circle: " << area << endl;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;

        case 3:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}

Lab 7 – Combined Practice

#include <iostream>
using namespace std;

int main() {
    int grade, courseCode;

    cout << "Enter grade (0–100): ";
    cin >> grade;

    cout << "Enter course code (1–3): ";
    cin >> courseCode;

    if (grade >= 75)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    
    switch (courseCode) {
        case 1:
            cout << "Course: Programming Fundamentals" << endl;
            break;
        case 2:
            cout << "Course: Data Structures" << endl;
            break;
        case 3:
            cout << "Course: Algorithms and Problem Solving" << endl;
            break;
        default:
            cout << "Course: Invalid code" << endl;
    }

    return 0;
}
