#include "conditional_spam_example.hpp"
#include <iostream>

KITCHEN(CONDITIONAL_HOG, Condition);
KITCHEN(Enum_HOG, Enum);
KITCHEN(UNVALID_HOG, Unvalid);


int main() 
{
    std::cout << "If a spam id has a negative value it's invalid in our internal logic" << "\n";
    std::cout << BON(Enum, toString)(A) << " = ";
    std::cout << A << '\n';
    std::cout << BON(Enum, toString)(B) << " = ";
    std::cout << BON(Enum, fromString)("B") << '\n';
    std::cout << BON(Enum, toString)(C) << " = ";
    std::cout << C << '\n';
    std::cout << BON(Enum, toString)(D) << " = ";
    std::cout << D << '\n';
    std::cout << "Is E Valid? - " << (BON(Enum, isValid)(static_cast<Enum>(E)) ? "true" : "false") << '\n';
    std::cout << "Is 'E' an Enum spam? - " << (BON(Enum, isStringValid)("E") ? "true" : "false") << '\n';
    std::cout << "Is 'C' an Enum spam? - " << (BON(Enum, isStringValid)("C") ? "true" : "false") << '\n';
    std::cout << "Is C Valid? - " << ((C > static_cast<Enum>(0)) ? "true" : "false") << '\n';
    std::cout << "Is SOMETHING_ELSE Valid? - " << ((SOMETHING_ELSE > static_cast<Enum>(0)) ? "true" : "false") << '\n';
    std::cout << "Is 3 Valid? - " << (BON(Enum, isValid)(static_cast<Enum>(3)) ? "true" : "false") << '\n';
    std::cout << "Is FAKE_B Valid? - " << (BON(Enum, isValid)(static_cast<Enum>(FAKE_B)) ? "true" : "false") << '\n';
    return 0;
}