#include <iostream>
#include <windows.h>
#include "ModulesKovalov.h"
#include <fstream>
#include <string>

using namespace std;

string text;

int count_rows(string s){
    int c = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == char(0x0A)){
            c++;
        }
    }
    return c;
}

int count_slash(string s){
    int c = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == char(92)){
            c++;
        }
    }
    return c;
}

bool check_location(string location){
    while(count_slash(location)> 2)
        location.erase(0, location.find(char(92)) + 1);
    string folder = location;
    folder.erase(folder.find(char(92)), folder.length() - folder.find(char(92)));
    if(folder == toCP866("lab6")){
        location.erase(0, location.find(char(92)) + 1);
        folder = location;
        folder.erase(folder.find(char(92)), folder.length() - folder.find(char(92)));
        if(folder != toCP866("prj")){
            return false;
        }
    }else{
        return false;
    }
    return true;
}

void readline(){
    string temp = text;
    temp.erase(temp.find(char(32)), temp.length() - temp.find(char(32)));
    text.erase(0, text.find(char(0x0A)) + 1);
    ClassLab6_Kovalov var(temp);
}

void readlastline(){
    string temp = text;
    temp.erase(temp.find(char(32)), temp.length() - temp.find(char(32)));
    text = "";
    ClassLab6_Kovalov var(temp);
}


int main(int argc, char *argv[])
{
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    string location = *argv;
    if(!check_location(location)){
        ofstream ofs("TestResults.txt", ios::out);
        ofs<<"Встановленi вимоги порядку виконання лабораторної роботи порушено!";
        ofs.close();
        system("pause");
        return 0;
    }
    ofstream ofs("..\\TestSuite\\TestResults.txt", ios::out);
    ofs.close();
    ifstream ifs("..\\TestSuite\\TestSuite.txt", ios::in);
    ifs.seekg (0, ifs.end);
    int length = ifs.tellg();
    ifs.seekg (0, ifs.beg);
    char * buffer = new char [length];
    ifs.read (buffer,length);
    ifs.close();
    text = buffer;
    while(count_rows(text) > 0){
        readline();
    }
    readlastline();
    system("pause");
    return 0;
}
