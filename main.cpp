#include <iostream>
using namespace std;

class AbstractEmp
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmp
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
        }
        else
        {
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

    void AskForPromotion()
    {
        if(Age > 30){
            std::cout<<Name <<" got promoted!"<< std::endl;
        }else{
            std::cout<<Name <<" sorry not promoted!"<< std::endl;
        }
    }
};

int main()
{
    Employee emp = Employee("AS Gamer", "Youtube", 21);
    Employee emp1("Arun", "Amazon", 40);

    // emp.Intro();
    // cout << "\n";
    // emp1.Intro();


    emp.AskForPromotion();
    emp1.AskForPromotion();
}