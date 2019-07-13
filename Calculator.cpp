#include <iostream>
#include <math.h>
#include <vector>
#include <string.h>
using namespace std;

int main() {
    float a;
    float b;
    bool c;
    bool d;
    bool True = true;
    bool False = false;
    int op;
    float add;
    float sub;
    float mul;
    float div;
    int operators;
    int bops;
    bool ANDO;
    bool ORO;
    bool NANDO;
    bool NORO;
    bool XORO;
    bool XNORO;

    //for (int i = 0; i < 90; i++) {

    std::cout << "What Operations would you like to do? \n";
    std::cout << "1. Arithmetic\n";
    std::cout << "2. Logical\n";
    std::cout << "Enter a number: ";
    std::cin >> op;
    std::cout << "\n";

    if (op < 1 || op > 2) {
        std::cout << "Please choose one of the listed options!\n";
        std::cout << "Enter a listed number: ";
        std::cin >> op;
}

    if (op == 1) {

    std::cout << "What Operation would you like to use?\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "Enter a number: ";
    std::cin >> operators;
    std::cout << "\n";

    if (operators > 4 || operators < 0) {
        std::cout << "Please enter a number from the list!\n";
        std::cout << "Enter a listed number: ";
        std::cin >> operators;
    }

    std::cout << "Please Enter a value: ";
    std::cin >> a;
    std::cout << "Please Enter another value: ";
    std::cin >> b;

    switch (operators) {
    case 1: {
        float add = a + b;
        std::cout << a << " + " << b << " = " << add;
        break;
    }
    case 2: {
        float sub = a - b;
        std::cout << a << " - " << b << " = " << sub;
        break;
    }
    case 3: {
        float mul = a * b;
        std::cout << a << " * " << b << " = " << mul;
        break;
    }
    case 4: {
        float div = a / b;
        std::cout << a << " / " << b << " = " << div;
        break;
    }
    }
    }else if (op == 2) {
        std::cout << "What logical operation would you like to do?\n";
        std::cout << "1. AND\n";
        std::cout << "2. OR\n";
        std::cout << "3. XOR\n";
        std::cout << "4. XNOR\n";
        std::cout << "5. NAND\n";
        std::cout << "6. NOR\n";
        std::cout << "Please enter a number: ";
        std::cin >> bops;

        if (bops > 6 || bops < 0) {
            std::cout << "Please enter a number from the list!";
            std::cout << "Enter a listed number: ";
            std::cin >> bops;
        }

        std::cout << "\n";
        std::cout << "Please enter your first condition: \n";
        std::cout << "True\n";
        std::cout << "False\n";
        std::cout << "Condition 1: ";
        std::cin >> c;

        if (c != True && False) {
            std::cout << "Please enter one of the listed conditions!";
            std::cout << "Please choose a listed condition: ";
            std::cin >> c;
        }

        std::cout << "\n";
        std::cout << "Please enter your second condition: \n";
        std::cout << "True\n";
        std::cout << "False\n";
        std::cout << "Condition 2: ";
        std::cin >> d;

        if (d != True && False) {
            std::cout << "Please enter one of the listed conditions!";
            std::cout << "Please choose a listed condition: ";
            std::cin >> d;
        }

        std::cout << "\n";

        switch (bops) {
        case 1: {
            ANDO = c && d;
            std::cout << c << " AND " << d << " = " << ANDO;
            break;
        }
        case 2: {
            ORO = c || d;
            std::cout << c << " OR " << d << " = " << ORO;
            break;
        }
        case 3: {
            XORO = c ^ d;
            std::cout << c << " XOR " << d << " = " << XORO;
            break;
        }
        case 4: {
            XNORO = !(c^d);
            std::cout << c << " XNOR " << d << " = " << XNORO;
            break;
        }
        case 5: {
            NANDO = !(c && d);
            std::cout << c << " NAND " << d << " = " << NANDO;
            break;
        }
        case 6: {
            NORO = !(c || d);
            std::cout << c << " NOR " << d << " = " << NORO;
            break;
    }
        }

}
    /*i--;
    std::cout << "\n";
    std::cout << "\n";

    } */
}
