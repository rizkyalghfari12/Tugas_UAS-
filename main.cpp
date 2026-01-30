#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Person {
    string name;
    vector<Person*> children;
    Person(string n) : name(n) {}
};

void link(Person* parent, Person* child) {
    if (parent != nullptr && child != nullptr) {
        parent->children.push_back(child);
    }
}

void printSpace(int n) {
    for (int i = 0; i < n; i++) cout << " ";
}

int main() {
    Person* kakekNenek = new Person("EYANG BUYUT");

    Person* bude1 = new Person("Shiju");
    Person* bude2 = new Person("Nanik");
    Person* ayahIbu = new Person("Habib & Lasminah");
    Person* om = new Person("Sri");

    Person* k1 = new Person("Nurul");
    Person* k2 = new Person("Syarif");
    Person* k3 = new Person("Ruhan");
    Person* saya = new Person("Rizky");
    Person* anak_bude_2_1 = new Person("sidik");
    Person* anak_bude_2_2 = new Person("Lia");
    Person* anak_om_1 = new Person("Ardan");
    Person* anak_om_2 = new Person("Fatih");

    link(kakekNenek, bude1);
    link(kakekNenek, bude2);
    link(kakekNenek, ayahIbu);
    link(kakekNenek, om);

    link(ayahIbu, k1);
    link(ayahIbu, k2);
    link(ayahIbu, k3);
    link(ayahIbu, saya);

    link(bude2, anak_bude_2_1);
    link(bude2, anak_bude_2_2);

    link(om, anak_om_1 );
    link(om, anak_om_2 );

    cout << "\n============================= POHON KELUARGA M RIZKY A ========================\n\n";

    printSpace(36); cout << "[ " << kakekNenek->name << " ]" << endl;
    printSpace(44); cout << "|" << endl;
    printSpace(21); cout << "_______________________|_____________________________" << endl;
    printSpace(21); cout << "|                      |          |                  |" << endl;

    printSpace(10);
    cout << "[" << ayahIbu->name << "]            [" << bude1->name << "]    [" << bude2->name << "]              [" << om->name << "]" << endl;

    printSpace(21); cout << "|"; printSpace(33); cout << "|"; printSpace(18); cout << "|\n";
    printSpace(4); cout << "_________________|__________________";
    printSpace(11); cout << "____|___";
    printSpace(11); cout << "____|___\n";
    printSpace(4); cout << "|                |       |          |";
    printSpace(9); cout << "|        |";
    printSpace(9); cout << "|        |\n";


    printSpace(4);
    cout << "[" << k1->name << "]      [" << k2->name << "] [" << k3->name << "]   ["<< saya->name <<"]";
    printSpace(5);
    cout << "[" << anak_bude_2_1->name << "]  [" << anak_bude_2_2->name << "]";
    printSpace(4);
    cout << "[" << anak_om_1->name << "]  [" << anak_om_2->name << "]" << endl;

    cout << "\n================================================================================\n";

    return 0;
}
