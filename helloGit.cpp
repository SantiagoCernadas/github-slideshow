#include <iostream>
using namespace std;

struct ST_PROGRAMMER{
  int age;
  string name;
  int height;
  int IQ;
};

ST_PROGRAMMER loadProgrammer(int age, string name, int height, int IQ){
    ST_PROGRAMMER programmer;

    programmer.age = age;
    programmer.name = name;
    programmer.height = height;
    programmer.IQ = IQ;

    return programmer;
}

void programmerdescription(ST_PROGRAMMER programmer){
    cout << "hello github community! my name is " << programmer.name << " and i have " << programmer.age
    << " years old." << endl << "i measure " << programmer.height << "CM and and I have an iq of " << programmer.IQ << endl;
}


int main(){
    ST_PROGRAMMER santiago = loadProgrammer(18,"Santiago Cernadas", 186,-20);

    programmerdescription(santiago);

    system("pause");
    return 0;
}
