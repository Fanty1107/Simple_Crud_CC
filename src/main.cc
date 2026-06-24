#include "include/list.h"


int main(int argc, char* argv[]) {
    if(argc > 1) {
        List list;
        list.username = string(argv[1]);
        list.print_menu(list.username);
    }
     else {
        cout << "Username not supplied... exiting the program" << endl;
    }
    return 0;
}
