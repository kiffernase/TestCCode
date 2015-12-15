#include "Test.h"
#include <iostream>

using namespace std;

Test::Test(){
    cout << "++++++Test Initialisiert++++++" << endl;
}

Test::~Test() {
    cout <<"------Test Destroyed---------" << endl;
}

void Test::print() {
    cout << "Das kommt von Test" << endl;
}
