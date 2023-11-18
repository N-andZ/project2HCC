#include <iostream>

//class Vehicle

class Vehicle {
protected: int numberOfWheels;
public:Vehicle(int numwheels){
        numberOfWheels = numwheels;
    }
public: Vehicle(){}
};


class Automobile:Vehicle {
private: int yearOfManufacture;
private: int odometerReading;
private: double weight;
public: Automobile(int year, int reading, int weight){


}

public: void GetInfo(){

}

};



using namespace std;
int main() {
Automobile * auto1 = new Automobile(2020, 41400, 3200);




    return 0;
}
