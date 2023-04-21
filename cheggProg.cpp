#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
 string name,surname;
 int payRate;
    Employee() {
        name = "not-set"; surname = "not-set";
        payRate = 0.0;
    }
    Employee(string n,string s,float hw,float pr) {
       
name=(n);
surname=(s);
       
hoursWorked=(hw);
payRate=(pr);
    }
    void setName(string n) { name = n; }
    void setSname(string s) { surname = s; }

    void setpayRate(float pr) { payRate = pr; }

    void setHoursWorked(float hw) { hoursWorked =hw>0?hw:0; }

   
string
Blank getName()
const
Blank {
        return name;
    }
   
string
Blank getSurname()
const
Blank {
        return surname;
    }
   
float
Blank getPayRate()
const
Blank {
        return payRate;
    }
   
float
Blank getHoursWorked()
    {
        return hoursWorked;
    }
   
virtual
Blank float calcSalary() = 0;
protected:
    string name, surname;   
    float payRate, hoursWorked;   
};
class SalariedEmployee : public Employee {
public:
    SalariedEmployee(){}
    SalariedEmployee(string n,string s,float hw,float pR) :
Employee
Blank(
n
Blank,
s
Blank,
hw
Blank,
pR
Blank){}
    float calcSalary() {
        return hoursWorked*payRate;
    }
    //compare two salaried employee
    //employee who has higher salary will result bigger
    bool operator>(SalariedEmployee& semp) {
        return
calcSalary()
Blank >
semp.calcSalary()
Blank;
    }
};
class ComissionEmployee : public Employee {
public:
    ComissionEmployee() {}
    ComissionEmployee(string n, string s, float hw, float pr) {
        setName(
n
Blank);    setSname(
s
Blank);
        setHoursWorked(
hw
Blank); setpayRate(
pr
Blank);
        commission = rand() % 100 + 1;
    }   
    float calcSalary() {
        return hoursWorked*payRate + commission;
    }
    ComissionEmployee operator+(float addCommision) {
        commission +=
addCommision
Blank;
        return
commission
Blank;
    }
    float getCommision() { return commission; }
protected:
    float commission;
};

ostream& operator<<(ostream& out,
CommissionEmployee
Blank e) {
    out << "Name : " << e->
getName()
Blank << "\nSurname : " << e->
getSurname()
Blank
        << "\nSalary : "<<e->
calcSalary()
Blank<<endl;
    ComissionEmployee* ptr =
Blank<
Blank>(e);
    if (ptr != NULL)
    {
        out << "\nCommision of " <<ptr->getName()   
            <<" "<<ptr->getSurname() <<" : "
            <<ptr->getCommision() << endl;
    }
    return out;
}

int main() {

    ComissionEmployee c_emp("John", "Doe", 40, 5);
    SalariedEmployee s_emp("Jane", "Doe", 40, 5);
    SalariedEmployee *sa_emp = new SalariedEmployee("Jenny", "Doe", 40, 5.2);
    cout << "Comission employee, " <<
Blank << endl;
    cout << "Salaried employee, " <<
Blank << endl;

    c_emp + 5;
    cout << "New salary of "<<c_emp.
Blank<<" after adding 5 to commision : "
        << c_emp.
Blank << endl;
}