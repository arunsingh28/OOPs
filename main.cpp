#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    // setter
    void setName(string name)
    {
        Name = name;
    }
    // getter
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }else{
            Age = 0;
        }
    }

    int getAge()
    {
        return Age;
    }

    void Intro()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee emp = Employee("Arun", "Amazib", 21);
    Employee emp1("Arun", "Amazon", 21);

    emp.Intro();
    cout << "\n";
    emp1.Intro();

    emp.setAge(17);
    cout << emp.getAge();
}