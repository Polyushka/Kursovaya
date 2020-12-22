#pragma once
#ifndef USER_H
#define USER_H
#include <QString>
#include <vector>

class User{
    protected:
    QString login;
    QString password;
public:
    User(){
        login=nullptr;
        password=nullptr;
    }
    User(char* log,char* pas){
        this->login=log;
        this->password=pas;
    }
    QString get_login(){return this->login;}
    QString get_password(){return this->password;}
    ~User(){};
};
#endif // USER_H
