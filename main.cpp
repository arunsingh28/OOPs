#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void Intro()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name,string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee emp = Employee("Arun","Amazib",21);
    Employee emp1("Arun","Amazon",21);

    emp.Intro();
    cout<<"\n";
    emp1.Intro();
}