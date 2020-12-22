#pragma once
#ifndef COUNTRY_H
#define COUNTRY_H
#include <QString>
#include <vector>

class Country{
private:
QString country_name;
QString capital_name;
int country_area;
int country_population;
QString type_of_government;
QString languages;
QString continent;
public:
Country(){
    country_name=nullptr;
    capital_name=nullptr;
    country_area=0;
    country_population=0;
    continent=nullptr;
    type_of_government=nullptr;
    languages=nullptr;
}
Country(char* country,char* capital,int area,int population,char* government,char* language,char* continent){
    this->country_name=country;
    this->capital_name=capital;
    this->country_area=area;
    this->country_population=population;
    this->continent=continent;
    this->type_of_government=government;
    this->languages=language;
}
friend void output_country(int number);
friend class Information;
friend class Game_capital;
~Country(){}
};

#endif // COUNTRY_H
