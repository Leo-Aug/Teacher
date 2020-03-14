//
// Created by LiuYang on 2020/3/14.
//

#ifndef TEACHER_TUTOR_H
#define TEACHER_TUTOR_H
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include "Postgraduate.h"
using std::string;
using std::vector;


class Tutor
{
public:
    explicit Tutor(string n = "tutor", string re_dir = "research_direction",
            vector<Postgraduate*> Ps = {});
    void show()const;
    void add_ps(Postgraduate *ps){Postgraduates.push_back(ps);}
    void set_name(const string &n){name = n;}
    void set_research_direction(const string &r_d){research_direction = r_d;}
private:
    string name;
    string research_direction;
    vector<Postgraduate*> Postgraduates;
};

Tutor::Tutor(string n, string re_dir, vector<Postgraduate*> Ps):name(std::move(n)),
research_direction(std::move(re_dir)), Postgraduates(std::move(Ps)){    }

void Tutor::show()const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "research_direction: " << research_direction << std::endl;
    std::cout << std::endl << "His(Her) Postgraduates: " << std::endl;
    for(const auto& ps : Postgraduates)
        ps->show();
}

#endif //TEACHER_TUTOR_H
