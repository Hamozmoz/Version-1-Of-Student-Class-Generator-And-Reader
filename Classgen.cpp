#include <string>
#include <string_view>
#include <array>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <random>
#include <vector>
constexpr std::array<std::string_view,50> Names{
"James",
"Mary",
"John",
"Patricia",
"Robert",
"Jennifer",
"Michael",
"Linda",
"William",
"Elizabeth",
"David",
"Barbara",
"Richard",
"Susan",
"Joseph",
"Jessica",
"Thomas",
"Sarah",
"Charles",
"Karen",
"Christopher",
"Lisa",
"Daniel",
"Nancy",
"Matthew",
"Betty",
"Anthony",
"Sandra",
"Mark",
"Margaret",
"Donald",
"Ashley",
"Steven",
"Kimberly",
"Andrew",
"Emily",
"Paul",
"Donna",
"Joshua",
"Michelle",
"Kenneth",
"Carol",
"Kevin",
"Amanda",
"Brian",
"Dorothy",
"George",
"Melissa",
"Timothy",
"Deborah"
};





std::string_view RandomName(){
std::random_device rd;
std::mt19937 name_Gen(rd());
std::uniform_int_distribution <size_t> distributer (0,Names.size()-1);
size_t Randomidx = distributer(name_Gen);
return Names[Randomidx];

}


void GenClass(std::vector<std::string>& Classes){

std::random_device rd;
std::mt19937 gradeGen(rd());
std::uniform_int_distribution distributer(20,100);



    std::string className;
   
    std::string studentName;
    size_t studentNum{0};
    size_t Grade{0};
    std::cout << "Please Write The Name Of The Class You Want To Create :\n";
std::getline(std::cin,className);
 Classes.emplace_back(className);
std::cout << "How Many Students Are In This Class : \n";
std::cin >> studentNum;
std::cin.ignore();
std::ofstream file;
 file.open("Classes.md",std::ios::app);
file << className << "\n";
for(size_t i{0};i<studentNum;i++)
{
Grade = distributer(gradeGen);
file << RandomName() << " " << Grade << "\n"  ;
}

file << "--------\n";
file.close();
}