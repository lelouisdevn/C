#include <iostream>
using namespace std;

class Vehicle {
    private:
        string color;
        string name;
    public:
        Vehicle () {
            color = "Crimson";
            name = "Mercedes Benz";
        }
        Vehicle(string c, string n) {
            this->color = c;
            this->name = n;
        }
        void print() {
            cout << "Ten hang: " << name << "\n";
            cout << "Mau: " << color << "\n";
        }
        void setBrandName(string brand) {
            this->name = brand;
        }
};
class Car: public Vehicle {
    private:
        int sl;
    public:
        Car() {
            sl = 20;
        }
        Car(string c, string n, int num) : Vehicle(c, n) {
            this->sl = num;
        }
        void printA() {
            Vehicle::print();
            cout << "So luong: " << sl << "\n";
        }
        void setName(string name) {
            Vehicle::setBrandName(name);
        }

};
int main() {
    // Car RR("blue", "Roll Royce", 15);
    // RR.printA();
    Car cars[5];
    cars[0].setName("Roll Royce");
    cars[0].printA();
}