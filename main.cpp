#include <QCoreApplication>
#include <stdint.h>
#include <fstream>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << ULLONG_MAX << std::endl;
    return a.exec();
}
