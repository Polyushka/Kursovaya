#include <text_file.h>
#include <authorization.h>
#include <registration.h>
using namespace std;

vector<Country> Information::all_inf(){
    fstream F;
    F.open("E:/Kursovaya/Kursovaya/Countries.txt",std::fstream::in);
    bool f_open=F.is_open();
    try{
            if(!f_open) throw "Error";
        }
        catch(const char* exception){
             QMessageBox::warning(nullptr,"Ошибка","Файл не открылся");
    }
    vector<Country>vec;

           char* country_name=new char[50];
           char* capital_name=new char[50];
           char* country_area=new char[50];
           int area;
           char* country_population=new char[50];
           int population;
           char* type_of_government=new char[50];
           char* languages=new char[50];
           char* continent=new char[50];
  while(!F.eof())
   {
       F.getline(country_name,100,'/');
       F.getline(capital_name,100,'/');
       F.getline(country_area,100,'/');
       area=stoi(country_area);
       F.getline(country_population,100,'/');
       population=stoi(country_population);
       F.getline(type_of_government,100,'/');
       F.getline(languages,100,'/');
       F.getline(continent,100,'/');
       vec.push_back(Country(country_name,capital_name,area,population,type_of_government,languages,continent));
        }
    F.close();
    return vec;}

vector<Country> Game_capital::all_inf_(){
    fstream F;
    F.open("E:/Kursovaya/Kursovaya/Countries.txt",std::fstream::in);
    bool f_open=F.is_open();
    try{
            if(!f_open) throw "Error";
        }
        catch(const char* exception){
             QMessageBox::warning(nullptr,"Ошибка","Файл не открылся");
    }
    vector<Country>vec;

           char* country_name=new char[50];
           char* capital_name=new char[50];
           char* country_area=new char[50];
           int area;
           char* country_population=new char[50];
           int population;
           char* type_of_government=new char[50];
           char* languages=new char[50];
           char* continent=new char[50];
  while(!F.eof())
   {
       F.getline(country_name,100,'/');
       F.getline(capital_name,100,'/');
       F.getline(country_area,100,'/');
       area=stoi(country_area);
       F.getline(country_population,100,'/');
       population=stoi(country_population);
       F.getline(type_of_government,100,'/');
       F.getline(languages,100,'/');
       F.getline(continent,100,'/');
       vec.push_back(Country(country_name,capital_name,area,population,type_of_government,languages,continent));
        }
    F.close();
    return vec;}

vector<User> Authorization::all_inf_users(){
    setlocale(LC_ALL,"Rus");
    fstream F;
    F.open("E:/Kursovaya/Kursovaya/Users.txt",std::fstream::in);
    bool f_open=F.is_open();
    try{
            if(!f_open) throw "Error";
        }
        catch(const char* exception){
             QMessageBox::warning(nullptr,"Ошибка","Файл не открылся");
    }
    vector<User>vec;
           char* lg=new char[50];
           char* pas=new char[50];
   while(!F.eof())
   {
       F.getline(lg,100,'/');
       F.getline(pas,100,'/');
       vec.push_back(User(lg,pas));
        }
    F.close();
    return vec;}

void Registration::input_file(std::string lg,std::string pas){
    fstream F;
    F.open("E:/Kursovaya/Kursovaya/Users.txt",std::fstream::app);
    bool f_open=F.is_open();
    try{
            if(!f_open) throw "Error";
        }
        catch(const char* exception){
             QMessageBox::warning(nullptr,"Ошибка","Файл не открылся");
    }
    F<<"/"<<lg<<"/"<<pas;
    F.close();
}
