#include <QCoreApplication>
#include <stdint.h>
#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << ULLONG_MAX << std::endl;
      std::cout << LLONG_MAX << LLONG_MAX<<std::endl;
    return a.exec();
}
