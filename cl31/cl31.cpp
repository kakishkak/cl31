#include <iostream>

using namespace std;

class Mobile {
public:
    virtual bool HaveButton() = 0;
    virtual bool CanCall() = 0;
    virtual void TikToks() {
        cout << "Cant record";
    }
    virtual void Playing() {
        cout << "cant play";
    }

};

class Smartphone : public Mobile {
private:
    bool HaveSensorScreen;
public:

    void Playing() override {
        cout << "This phone for gaming" << endl;
    }
    bool HaveButton() override {
        return true;
    }
    bool CanCall() override {
        return true;
    }
};

class Cameraphone : public Mobile {
private:
    bool HaveCoolCAmera;
public:

    void TikToks() override {
        cout << "This phone can record" << endl;
    }
    bool HaveButton() override {
        return true;
    }
    bool CanCall() override {
        return true;
    }
};

int main()
{
    Mobile* obj = new Cameraphone();

    obj->TikToks();

    obj = new Smartphone();

    obj->Playing();
}

