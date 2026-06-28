
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

GenClass(Classes);
GenClass(Classes);
printClassData(Classes);
}