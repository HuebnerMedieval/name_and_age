#include <iostream>
#include <string>

int main(){
    std::cout << "Enter your first name and age:\n";
    std::string first_name;
    int age;

    std::cin >> first_name >> age;

    std::cout << "Wow, " << first_name << " you are " << age * 12 << " months old!\n";
}