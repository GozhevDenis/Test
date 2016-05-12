#include<windows.h>
#include<iostream>
#include <cstring>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;
using std::cout;
using std::endl;
int main()
{
    char c[50];
    vector<string> x;
    setlocale(LC_ALL, "RUS");
//    std::stringstream t;
    string s;
    fstream f;
    double p = 10;;
    string temps, namestr;
    char filename[50];
    std::stringstream tempp;

    WIN32_FIND_DATA FindFileData;
    HANDLE hf;
    hf=FindFirstFile("*", &FindFileData);
    if (hf!=INVALID_HANDLE_VALUE){
        do{
                if ((FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) && (FindFileData.cFileName[0] != '.') &&
                        (FindFileData.cFileName[0] != 'U' ||
                        FindFileData.cFileName[1] != 'n' ||
                        FindFileData.cFileName[2] != 'i' ))

                    {//if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_SYSTEM  )
                     std::cout << FindFileData.cFileName << "\n";
                     /*s = FindFileData.cFileName;
                     strcpy(c, s.c_str());
                     //cout << c << endl;
                     x.push_back(FindFileData.cFileName);*/
                    // cout << x.back() << endl;
                    }
            }
        while (FindNextFile(hf,&FindFileData)!=0);
        FindClose(hf);
    }
        /*//tempp << x[0] << "/output" << "/distrib_000001.dat";              //����� ��� ������ �������� �����!! ����� ���������!!
        //tempp >> temps;                                      //������������ ��� � ������, �.� � char ������
        //tempp.str("");                                       //������� �����,
        //tempp.clear();
        temps = x[0] + "/output" + "/distrib_000001.dat";                                   //����� ����� ���� ��� ������������
        strcpy(filename, temps.c_str());
        f.open(filename);
        if (!f.is_open())
        {
        cout << "���� �� ����� ���� ������ ��� ������\n";
        }
        f >> p;
    cout << filename << '\t' << p << endl;*/
    f.close();

}
void new_func(void)
{
    cout << "new_func" << endl;
}
