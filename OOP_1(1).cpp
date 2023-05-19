#include <iostream>
#include <string>

class Calculator
{
private:
    double num1_;
    double num2_;
public:
    double add() { return num1_ + num2_; }
    double subtract_1_2() { return num1_ - num2_; }
    double subtract_2_1() { return num2_ - num1_; }
    double multiply() { return num1_ * num2_; }
    double divide_1_2() { return num1_ / num2_; }
    double divide_2_1() { return num2_ / num1_; }
    bool set_num1(double num1)
    {
        num1_ = num1;
        if(num1)
            return false;
        else return true;
    };
    bool set_num2(double num2)
    {
        num2_ = num2;
        if(num2)
            return false;
        else return true;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");

    Calculator calculator;
    std::string quit;
    do {

        int num1, num2;
        bool i, j;
        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            i = calculator.set_num1(num1);
            if (i)
                std::cout << "Неверный ввод!" << std::endl;
        } while (i);
        do {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            j = calculator.set_num2(num2);
            if (j) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (j);
        std::cout << "num1" << " + " << "num2" << " = " << calculator.add() << std::endl;
        std::cout << "num1" << " - " << "num2" << " = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2" << " - " << "num1" << " = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1" << " * " << "num2" << " = " << calculator.multiply() << std::endl;
        std::cout << "num1" << " / " << "num2" << " = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2" << " / " << "num1" << " = " << calculator.divide_2_1() << std::endl;
       
        std::cout << "Для выхода напиши 0, для продолжения люббой символ! ";
        std::cin >> quit;
        } while (quit != "0");
}
