
//Example :
#include <random>
#include <iostream>
#include <fstream>
#include <string>
#include "array"
#include <string_view>
#include "Classgen.h"
#include <vector>
#include "ClassDataPrinter.h"
std::vector<std::string> Classes;
int main(){
char choice{'8'};

while(choice != 0 || choice != 1){
    std::cout << "What Would You Like To Do (0)Generate A New Class (1) Read Class Data (Default) Quit Program : \n";
    std::cin >> choice ;
    std::cin.ignore();
    switch(choice){
        case 0 :
GenClass(Classes);
break;
case 1 :
printClassData(Classes);
break;
default :
std::cout << "Exiting Program...\n";
break;
}
}

std::ofstream file("Classes");

file.close();
}