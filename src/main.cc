#include "include/list.h"
#include "include/database.h"

int main(int argc, char* argv[]) {
    List list;
    Database data;
    if(argc > 1) {
        
        list.username = string(argv[1]);
        list.mainList = data.read();
        list.find_userList();
        list.print_menu(list.username);
    }
     else {
        cout << "Username not supplied... exiting the program" << endl;
    }
    return 0;
}
