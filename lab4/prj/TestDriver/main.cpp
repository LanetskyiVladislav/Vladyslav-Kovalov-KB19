#include <iostream>
#include "calculation.h"
#include <fstream>
#include <string>

using namespace std;

string change_i(string s){
    while(s.find("і") < s.length() && s.find("і") > 0){
        s[s.find("і")] = 'i';
    }
    return s;
}

int main()
{
    setlocale(LC_ALL, "ukr");
    ifstream ifs("text.txt", ifstream::in);
    if(!ifs.is_open()){
        cout<<"Файл для зчитування не знайдений!\nНатиснiть y або Y щоб створити його\nВаш вибiр: ";
        char ch;
        cin>>ch;
        if(ch == 'y' || ch == 'Y'){
            ifs.close();
            ofstream ifs("text.txt");
            cout<<"\n\n\n\n";
        }else{
            cout<<"\nСтворіть файл для зчитування, щоб продовжити!";
            system("pause");
            return 0;
        }
    }
    ifs.close();
    ofstream ofs("output.txt");
    ofs.close();
    string address, text;
    address = "text.txt";
    text = "Як парость виноградної лози, плекайте мову.\nПильно й ненастанно політь бур/'ян.\nЧистіша від сльози вона хай буде.\nВірно і слухняно нехай вона щоразу служить вам,\nХоч і живе своїм живим життям.";
    cout<<task4_1(address, text)<<endl;
    cout<<task4_2(address, text)<<endl;
    cout<<task4_3()<<endl;


    return 0;
}
