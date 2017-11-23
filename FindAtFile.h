#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
// А это уже контент файла .h, где и находятся все предварительные объявления

class FindAtFile{
private:
    char choice, name[20];
    int x;
public:
    void menu();
    void ShowData(struct cpu_struct);
    void FindAndShow(struct cpu_struct);
};
