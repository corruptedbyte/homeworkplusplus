#include <iostream>

using namespace std;

struct complex {
    float a;
    float b;
};

struct car {
    float width;
    float clearence;
    int engineVolume;
    int horsePower;
    float wheels;
    char color[25];
    char gearBox[50];
};

// car yourCar(float width, float clearence, int engineVolume, int horsePower, int wheels, char[] color, char[] gearBox) {
//     width = 0f;
//     clearence = 0f;
//     engineVolume = 0;
//     horsePower = 0;
//     wheels = 0f;
//     color = {"Blank"}
//     gearBox = {"Blank"}
// }

void setCar(car& userCar) {
    cout << "Enter width of the car: ";
    cin >> userCar.width;
    cout << endl;

    cout << "Enter clearence of the car: ";
    cin >> userCar.clearence;
    cout << endl;

    cout << "Enter volume of the engine: ";
    cin >> userCar.engineVolume;
    cout << endl;

    cout << "Enter horsepower of the engine: ";
    cin >> userCar.horsePower;
    cout << endl;

    cout << "Enter diametre of wheels: ";
    cin >> userCar.wheels;
    cout << endl;

    cout << "Enter color of the car (24 symbols max): ";
    cin >> userCar.color;
    cout << endl;

    cout << "Enter gearbox of the car (49 symbols max): ";
    cin >> userCar.gearBox;
    cout << endl;
}

void displayCar(car userCar) {
    cout << "Width: " << userCar.width << endl;
    cout << "Clearence: " << userCar.clearence << endl;
    cout << "Volume of the Engine: " << userCar.engineVolume << endl;
    cout << "Horsepower: " << userCar.horsePower << endl;
    cout << "Wheel diametre: " << userCar.wheels << endl;
    cout << "Color: " << userCar.color << endl;
    cout << "Gearbox: " << userCar.gearBox << endl;
}

void searchCar(car userCar, char display, char value) {
    switch (display) {
        case '1':
            if (*userCar.width == value) {
                displayCar(userCar);
            }
            break;
        case '2':
            if (userCar.clearence == value) {
                displayCar(userCar);
            }
            break;
        case '3':
            if (userCar.engineVolume == value) {
                displayCar(userCar);
            }
            break;
        case '4':
            if (userCar.horsePower == value) {
                displayCar(userCar);
            }
            break;
        case '5':
            if (userCar.wheels == value) {
                displayCar(userCar);
            }
            break;
        case '6':
            if (userCar.color == value) {
                displayCar(userCar);
            }
            break;
        case '7':
            if (userCar.gearBox == value) {
                displayCar(userCar);
            }
            break;
    }
}

int main() {
    car yourCar;
    setCar(yourCar);
    displayCar(yourCar);
}