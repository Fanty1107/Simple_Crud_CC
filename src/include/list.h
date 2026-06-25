#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;
class List {
public:
    vector<vector<string>> mainList;
    std::vector<std::string> list;
    std::string username;

    void print_menu(std::string name);
    void print_list();
    void add_to_list();
    void delete_from_list();
    void menu_option();
    void find_userList();
private:
protected:
    
};

