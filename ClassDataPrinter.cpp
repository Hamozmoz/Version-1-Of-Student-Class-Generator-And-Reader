
#include <iostream>
#include <string>
#include <string_view>
#include <fstream>
#include <filesystem>
#include <vector>



void printClassData(std::vector<std::string>& Classes){
    bool isAClassName(std::string_view str,std::vector<std::string>& Classes);
if(std::filesystem::exists("Classes")){
  
std::ifstream file("Classes");
std::string line;
int choice{-1};
std::cout << "Would You Like To Print All Class Data (0) Or Would You Like To Print The Data Of A Specific Class (1)\n";
std::cin >> choice;
std::cin.ignore();

    switch(choice){
case 0 :
while(std::getline(file ,line)){
    if(line.back() == '\r'){
        line.pop_back();
    }
  for(size_t i {0};i < Classes.size();i++){
    if(line == Classes[i]){
        std::cout << "Class : " << line << "\n";
        while(file >> line)
        {
            if(line != "--------"){
    int grade;
    file >> grade;
    std::cout << "Student : " << line << " Grade : " << grade << "\n"; 
}

        }
    }
  }
}

    }
}





}
bool isAClassName(std::string_view str,std::vector<std::string>& Classes){
    for(int i{0};i<Classes.size();i++){
        if(Classes[i] == str){
            return true ;
        }
            
        
    }
return false;
}