#include <iostream>
#include <string>
#include <vector>
#include "Tutor.h"
#include "Postgraduate.h"
using std::string;
using std::vector;

int main()
{
    vector<Postgraduate *> Ps;
    Tutor Tutors[3]{Tutor("Zhang San", "Software Engineering"), Tutor("Li Si", "Computer Science"),
                    Tutor("Wang Wu", "Network Security")};
    for(auto &Ts : Tutors)
    {
        char state;
        std::cout << "Enter the Postgraduates of the tutor " << &Ts - Tutors + 1 << ":" << std::endl;
        std::cout << "Input?(y/n)";
        std::cin >> state;
        std::cin.get();
        while(state != 'n')
        {
            string p_name;
            string p_profession;
            int p_id;
            std::cout << "name: ";
            getline(std::cin, p_name);
            std::cout << "profession: ";
            getline(std::cin, p_profession);
            std::cout << "id: ";
            std::cin >> p_id;
            auto *p = new Postgraduate(p_name, p_profession, p_id);
            Ps.push_back(p);
            Ts.add_ps(p);
            std::cout << "Input?(y/n)";
            std::cin >> state;
            std::cin.get();
        }
    }
    for(const auto &Ts : Tutors)
    {
        Ts.show();
        std::cout << std::endl;
    }
    for(const auto &p : Ps)
    {
        delete p;
    }
    return 0;
}
