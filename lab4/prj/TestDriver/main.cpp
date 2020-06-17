#include <iostream>
#include "calculation.h"
#include <fstream>
#include <string>

using namespace std;

string change_i(string s){
    while(s.find("�") < s.length() && s.find("�") > 0){
        s[s.find("�")] = 'i';
    }
    return s;
}

int main()
{
    setlocale(LC_ALL, "ukr");
    ifstream ifs("text.txt", ifstream::in);
    if(!ifs.is_open()){
        cout<<"���� ��� ���������� �� ���������!\n������i�� y ��� Y ��� �������� ����\n��� ���i�: ";
        char ch;
        cin>>ch;
        if(ch == 'y' || ch == 'Y'){
            ifs.close();
            ofstream ifs("text.txt");
            cout<<"\n\n\n\n";
        }else{
            cout<<"\n������� ���� ��� ����������, ��� ����������!";
            system("pause");
            return 0;
        }
    }
    ifs.close();
    ofstream ofs("output.txt");
    ofs.close();
    string address, text;
    address = "text.txt";
    text = "�� ������� ���������� ����, �������� ����.\n������ � ���������� ����� ���/'��.\n������ �� ������ ���� ��� ����.\n³��� � �������� ����� ���� ������ ������� ���,\n��� � ���� ���� ����� ������.";
    cout<<task4_1(address, text)<<endl;
    cout<<task4_2(address, text)<<endl;
    cout<<task4_3()<<endl;


    return 0;
}
