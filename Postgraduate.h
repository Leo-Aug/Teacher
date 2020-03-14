//
// Created by LiuYang on 2020/3/14.
//

#ifndef TEACHER_POSTGRADUATE_H
#define TEACHER_POSTGRADUATE_H
#include <iostream>
#include <string>
#include <utility>
using std::string;


class Postgraduate
{
public:
    explicit Postgraduate(string n = "Postgraduate", string p = "Profession", int i = 0);
    void show()const;
private:
    string name;
    string profession;
    int id;
};

Postgraduate::Postgraduate(string n, string p, int i):name(std::move(n)), profession(std::move(p)), id(i){}

void Postgraduate::show()const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "id: " << id << std::endl;
    std::cout << "profession: " << profession << std::endl;
}

#endif //TEACHER_POSTGRADUATE_H
