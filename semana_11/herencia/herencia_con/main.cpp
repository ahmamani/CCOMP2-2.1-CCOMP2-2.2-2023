#include <iostream>
#include <iomanip>
#include <vector>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
    /*CommissionEmployee e1{"Sue", "Jones", "222-22-2222", 10000, .06};
    CommissionEmployee e2{"Sue1", "Jones1", "222-22-2222", 10000, .06};
    CommissionEmployee e3{"Sue2", "Jones2", "222-22-2222", 10000, .06};*/

    CommissionEmployee *e1 = new CommissionEmployee{"Sue", "Jones", "222-22-2222", 10000, .06};
    CommissionEmployee *e2 = new CommissionEmployee{"Sue1", "Jones1", "222-22-2222", 10000, .06};
    CommissionEmployee *e3 = new CommissionEmployee{"Sue2", "Jones2", "222-22-2222", 10000, .06};


    // crear varios objetos 5
    BasePlusCommissionEmployee bpe1{"Bob", "Lewis", "333-33-3333", 5000, .04, 300};
    BasePlusCommissionEmployee bpe2{"Bob1", "Lewis1", "333-33-3333", 5000, .04, 300};
    BasePlusCommissionEmployee bpe3{"Bob2", "Lewis2", "333-33-3333", 5000, .04, 300};

    CommissionEmployee *ptr1 = e1;
    cout << ptr1->toString() << endl;

    BasePlusCommissionEmployee *ptr2 = &bpe1;
    cout << ptr2->toString() << endl;
    
    CommissionEmployee &ref1 = *e1;
    BasePlusCommissionEmployee &ref2 = bpe1;

    cout << ref1.toString() << endl;
    cout << ref2.toString() << endl;

    // crear un vector de Punteros a ComissionEmployee
    // agregar las direcciones de memoria de cada objeto creado anteriormente
    // imprimir usando for 
    vector<CommissionEmployee*> vec_employees;
    vec_employees.push_back( e1 );
    vec_employees.push_back( e2 );
    vec_employees.push_back( e3 );

    for(CommissionEmployee *e : vec_employees) {
        cout << e->toString() << endl;
    }

    delete e1;
    delete e2;
    delete e3;

    // crear un vector de Punteros a BasePlusComissionEmployee
    // agregar las direcciones de memoria de cada objeto creado anteriormente
    // imprimir usando for 
    vector<BasePlusCommissionEmployee*> vec_baseplusemployees;
    vec_baseplusemployees.push_back( &bpe1 );
    vec_baseplusemployees.push_back( &bpe2 );
    vec_baseplusemployees.push_back( &bpe3 );

    for(BasePlusCommissionEmployee *e : vec_baseplusemployees) {
        cout << e->toString() << endl;
    }

    return 0;
}