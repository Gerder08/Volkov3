#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
// � ��� ��� ������� ����� .h, ��� � ��������� ��� ��������������� ����������

class NewRecord{
private:
    /*
    char brend;
    char model;
    int freq;
    int price;
    */
public:
    NewRecord();
    void Add(struct cpu_struct);
    ~NewRecord();
};
