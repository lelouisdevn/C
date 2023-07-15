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
};
class Car: public Vehicle {
    private:
        int sl;
    public:
        Car(string c, string n, int num) : Vehicle(c, n) {
            this->sl = num;
        }
        void printA() {
            Vehicle::print();
            cout << "So luong: " << sl << "\n";
        }

};
int main() {
    Car RR("blue", "Roll Royce", 15);
    RR.printA();
}