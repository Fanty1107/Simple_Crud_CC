#include "include/database.h"

void Database::write(vector<vector<string>> mainList){
    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open()){
        for(uint i = 0; i < mainList[i].size(); i++) {
            for(uint j = 0; j < mainList[i][j].size(); j++){
                db << mainList[i][j] << "\n";
            }
        }
    }
    else{
        cout << "cannot open file for write";
    }

    db.close();
}
vector<vector<string>> Database::read(){
    string line;
    ifstream db;
    db.open("db/lists.sl");
    vector<string> userList;

    if(db.is_open()){
        while(getline(db,line,'\n')){
            if(line.front() == '#'){
                cout << "a" << line << "\n";
                line.erase(line.begin());
                userList.push_back(line);
            }
            else if(line.front() == '%'){
                cout << "found percentage\n";
                mainList.push_back(userList);
                userList.clear();
            }
            else{
                cout << "Found an item: " << line << "\n";
                userList.push_back(line);
            }
        }
    }
    else{
        cout << "cannot open file for reading";
    }

    db.close();
    return mainList;
}