#include "iostream"
using namespace std;
class Student
{
private:
    int age;
    string name;

public:
    Student()
    {
        age = 18;
        name = "Sinh vien";
    }
    // Copy constructor takes reference
    // as its parameter
    Student(Student &s)
    {
        this->age = s.age;
        this->name = s.name;
    }
    void printStudentInfo()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
    void setInfo(string, int);
};

void Student::setInfo(string name, int age)
{
    this->age = age;
    this->name = name;
}
class ItStudent : public Student
{
private:
    string major;

public:
    ItStudent() : Student()
    {
        this->major = "Software Engineering";
    }
    void printItStudentInfo()
    {
        Student::printStudentInfo();
        cout << this->major << endl;
    }
    void addInfo(string name, int age, string major) {
        Student::setInfo(name, age);
        this->major = major;
    }
};
int main()
{
    // Student me;
    // me.setInfo("Thai", 22);
    // me.printStudentInfo();
    // Student fr(me);
    // fr.printStudentInfo();
    // ItStudent moi;
    // moi.printItStudentInfo();

    int n = 3;
    ItStudent *st = new ItStudent[n];
    if (st == NULL)
    {
        cout << "error of allocating memory" << endl;
    }
    for(int i=0; i<n; i++) {
        string name, major; int age;
        cout << "Name: " << endl;
        getline(cin, name);
        cout << "Age: " << endl;
        cin >> age;
        cin.ignore(1);
        cout << "Major: " << endl;
        getline(cin, major);
        st[i].addInfo(name, age, major);
    }

    for (int j=0; j<n; j++) {
        st[j].printItStudentInfo();
        cout << endl;
    }
}