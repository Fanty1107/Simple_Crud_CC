#pragma once
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Database {
    public:
        vector<vector<string>> mainList;
        string username;
        
        void write(vector<vector<string>> mainList);
        vector<vector<string>> read();
};