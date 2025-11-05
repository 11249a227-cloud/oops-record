#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float basicSalary;
    float hra, da, pf, grossSalary, netSalary;

public:
    void getData() {
        cout << "\nEnter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = 0.20f * basicSalary; 
        da  = 0.10f * basicSalary;  
        pf  = 0.08f * basicSalary;  
        grossSalary = basicSalary + hra + da;
        netSalary   = grossSalary - pf;
    }

    void displayData() const {
        cout << "\n---------------------------------------------";
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << name;
        cout << fixed << setprecision(2);
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nHRA (20%): " << hra;
        cout << "\nDA (10%): " << da;
        cout << "\nPF (8%): " << pf;
        cout << "\nGross Salary: " << grossSalary;
        cout << "\nNet Salary: " << netSalary;
        cout << "\n---------------------------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; 

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp[i].getData();
        emp[i].calculateSalary();
    }

    cout << "\n======= EMPLOYEE PAYROLL =======\n";
    for (int i = 0; i < n; ++i) {
        emp[i].displayData();
    }

    return 0;
}

