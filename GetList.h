// «десь начинаетс€ header guard.††ADD_H Ц любое уникальное им€.†ќбычно используют им€ заголовочного файла в качестве этого идентификатора.

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
// ј это уже контент файла .h, где и наход€тс€ все предварительные объ€влени€

class GetList{
private:
    //char FileName;
public:
    GetList();
    void Reading(struct cpu_struct);
    ~GetList();
};
