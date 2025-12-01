#include <iostream>
using namespace std;
int main () {
    
    string Employee_name;
    double gross, pre_tax, pagibig, philhealth, SSS, net_pay;
    char choice;
    
    do {
    cout << "\n------------PAYROLL SYSTEM-----------------" << endl << endl;
    cout << "a. Manual Calculation" << endl;
    cout << "b. Automatic Calculation" << endl;
    cout << "c. Exit" << endl;
    cout << "Choose your mode of calculation: ";
    cin >> choice;
    cin.ignore();
    
    if (choice=='a' || choice== 'A'){
    
        cout << "\n------------Net Pay Calculation----------------" << endl << endl;
        
        cout << "Enter Employee Name: ";
        getline(cin, Employee_name);
        
        cout << "\nGood Day " << "Sir/Ma'am " << Employee_name << " please enter your Pre Tax Deductions.\n\n";
    
        cout << "Enter your Gross Pay Amount: ";
        cin >> gross;
    
        cout << "Enter Pag-Ibig Contribution: ";
        cin >> pagibig;
    
        cout << "Enter PhilHealth Contribution: ";
        cin >> philhealth;
    
        cout << "Enter your SSS Contribution: ";
        cin >> SSS;
    
        pre_tax = pagibig + philhealth + SSS;
        net_pay = gross - pre_tax;

        cout << "\n========================================"<< endl;
        cout << "Employee Name   :      " << Employee_name << endl;
        cout << "Gross Pay       :      " << gross << endl;
        cout << "________________________________________\n" << endl;
        cout << "Pag-ibig        :      " << pagibig << endl;
        cout << "PhilHealth      :      " << philhealth << endl;
        cout << "SSS             :      " << SSS << endl;
        cout << "________________________________________\n" << endl;
        cout << "Pre-Tax         :      " << pre_tax << endl;
        cout << "Net Pay         :      " << net_pay << endl;
        cout << "\n========================================" << endl;
        
        cin.ignore();
            
    } else if (choice=='B' || choice=='b'){

        cout << "\n------------Net Pay Calculation----------------" << endl << endl;
        cout << "Enter your Employee Name: ";
        getline(cin,Employee_name);
        
        cout << "\nEnter you Gross Pay Amount: ";
        cin >> gross;
        
        pagibig=100;
        SSS=gross*0.04;
        philhealth=(gross*0.04)/2;
        pre_tax=pagibig+SSS+philhealth;
        
        net_pay= gross-pre_tax;
        cout << "\n========================================"<< endl;
        cout << "Employee Name   :      " << Employee_name << endl;
        cout << "Gross Pay       :      " << gross << endl;
        cout << "________________________________________\n" << endl;
        cout << "Pag-ibig        :      " << pagibig << endl;
        cout << "PhilHealth      :      " << philhealth << endl;
        cout << "SSS             :      " << SSS << endl;
        cout << "________________________________________\n" << endl;
        cout << "Pre-Tax         :      " << pre_tax << endl;
        cout << "Net Pay         :      " << net_pay << endl;
        cout << "\n========================================" << endl;
        
        cin.ignore();
        
    } else if (choice=='C' || choice=='c') {
        cout << "\nThank you for using our system!" << endl;
        break;
    } else {
        cout << "Invalid Input!" << endl;
    }
    } while(true);
    return 0;
}
