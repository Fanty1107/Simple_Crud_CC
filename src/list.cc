#include "include/list.h"


void List::print_menu(string name) {

    int choice;
    
    cout << "**************************" << endl;
    cout << "1 - Print list.\n";
    cout << "2 - Add to list.\n";
    cout << "3 - Delete from list.\n";
    cout << "4 - Exit.\n";
    cout << "Enter your choice and press return/enter: \n";

    cin >> choice;
  
        switch(choice) {
        case 1:
            print_list();
            break;
        case 2:
            add_to_list();
            break;
        case 3:
            delete_from_list();
            break;
        case 4:
            cout << "Exiting..." << endl;
            return;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            sleep(1);
            print_menu(name);
    
    }
}

void List::add_to_list() {
    string item;

    cout << "*********** Add Item ***************\n" << endl;

    cout << "Enter the item to add to the list: \n";
    cin >> item;
    list.push_back(item);
    cout << item << " has been added to the list." << endl;
    sleep(1);
    cin.clear();
    menu_option();
}

void List::print_list() {
    cout << "*********** Print List ***************" << endl;

    if(list.empty())
    {
        cout << "The list is empty." << endl;
        menu_option();
    } 
    else 
    {
        for(size_t i = 0; i < list.size(); i++) {
        cout << " * " << list[i] << endl;
        }
        cout << "\nTotal items in the list: " << list.size() << endl;
        menu_option();
    }
}

void List::delete_from_list() {
    int index;

    cout << "*********** Delete Item ***************\n" << endl;
    cout << "Select an index of the item to delete from the list: \n";
    if(list.empty()){
        cout << "The list is empty." << endl;
    }
    else{
        for(size_t i = 0; i < list.size(); i++) {
        cout << i << " - " << list[i] << endl;
        }
    }
    cin >> index;
    if(index >= 0 && index < list.size()) {
        cout << list[index] << " has been deleted from the list." << endl;
        list.erase(list.begin() + index);
    } else {
        cout << "Invalid index. No item deleted." << endl;
    }
    cin.clear();
    sleep(1);
    menu_option();
}

void List::menu_option() {
    char choice;
    cout << "M - Menu\n";
    cin >> choice;

    if(choice == 'M' || choice == 'm') {
        print_menu(username);
    } 
    else
    {
        cout << "Exiting..." << endl;
        return;
    }
}

void List::find_userList() {
    bool userFind = false;
    cout << "\n**** Welcome " << username << "*********" << endl;
    for(uint i = 0; i< mainList.size(); i++){
        if(mainList[i][0] == username){
            cout << "User has been found " << mainList[i][0] << "\n";
            list = mainList[i];
            userFind = true;
            break;
        }
    }

}
