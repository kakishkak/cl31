#include <iostream>

using namespace std;

//class Mobile {
//public:
//    virtual bool HaveButton() = 0;
//    virtual bool CanCall() = 0;
//    virtual void TikToks() {
//        cout << "Cant record";
//    }
//    virtual void Playing() {
//        cout << "cant play";
//    }
//
//};
//
//class Smartphone : public Mobile {
//private:
//    bool HaveSensorScreen;
//public:
//
//    void Playing() override {
//        cout << "This phone for gaming" << endl;
//    }
//    bool HaveButton() override {
//        return true;
//    }
//    bool CanCall() override {
//        return true;
//    }
//};
//
//class Cameraphone : public Mobile {
//private:
//    bool HaveCoolCAmera;
//public:
//
//    void TikToks() override {
//        cout << "This phone can record" << endl;
//    }
//    bool HaveButton() override {
//        return true;
//    }
//    bool CanCall() override {
//        return true;
//    }
//};

//int main()

    //Mobile* obj = new Cameraphone();
    //
    //obj->TikToks();
    //
    //obj = new Smartphone();
    //
    //obj->Playing();



#include <iostream>

using namespace std;

class IMovable {
public:
    virtual void Move() = 0;
};

class IDrivable {
public:
    virtual void Drive() = 0;
};

class IFillable {
public:
    virtual void Fill() = 0;
};

class IFlyable {
public:
    virtual void Fly() = 0;
};



class Car : public IDrivable {
public:
    void Drive() override {
        cout << "Car can move" << endl;
    }
};

class Human : public IMovable {
public:
    void Move() override {
        cout << "Person can move" << endl;
    }
};

class Flying : public IFlyable {
public:
    void Fly() override {
        cout << "It can fly" << endl;
    }
};

class Ship : public IFillable {
public:
    void Fill() override {
        cout << "Ship can walk" << endl;
    }
};

int main()
{

    Car objCar = Car();
    Human objHuman = Human();
    Flying objFlying = Flying();
    Ship objShip = Ship();

    objCar.Drive();
    objHuman.Move();
    objFlying.Fly();
    objShip.Fill();

}

