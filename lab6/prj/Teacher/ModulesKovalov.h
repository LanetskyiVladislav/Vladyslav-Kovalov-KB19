#include <string>
#include <fstream>

using namespace std;

string toCP866(char s[]){
    char mes[100];
    CharToOem(s,mes);
    return mes;
}

string toCP1251(char s[]){
    char mes[100];
    OemToChar(s,mes);
    return mes;
}

string cut(string v){
    if(v.find(char(44)) != -1)
        v[v.find(char(44))] = char(46);
    while((v.rfind(char(45)) < v.rfind(char(48)) && v[v.size()-1] == char(48)) || v[v.size()-1] == char(45))
        v.erase(v.size()-1, 1);
    return v;
}

class ClassLab6_Kovalov{
private:
    double x, sq;

    string check_numb(string s){//0 - not passed, 1 - passed
        char buf;
        for(int i = 0; i < s.length(); i++){
            if(int(s[i]) < 48 || int(s[i]) > 57){
                if(s[i] != char(46) && s[i] != char(45)){
                    buf = s[i];
                    s = "Неправильний символ: ";
                    s += buf;
                    s += "!";
                    return s;
                }
            }
        }
        if(s[0] == char(46) || s[s.length()-1] == char(46)){
            s = "Неправильний символ: .!";
            return s;
        }
        if(s[0] == char(45) && s[1] == char(46)){
            s = "Неправильний символ: .!";
            return s;
        }
        if(s.find(char(46) + char(46)) < s.length()-1){
            s = "Неправильний символ: .!";
            return s;
        }
        if(s.find(char(45)) > 0 && s.find(char(45)) < s.length()-1){
            s = "Неправильний символ: -!";
            return s;
        }
        return "";
    }

    string check_value(string s){
        if(check_numb(s) != ""){
            return check_numb(s);
        }
        if(stod(s) <= 0){
            return (s + " менше або дорівнює 0!");
        }
        return "";
    }

    void calc_sq(){
        sq = 6 * x * x;
    }

public:
    double getx(){
        return x;
    }
    double getsq(){
        return sq;
    }

    string setx(string d){
        if(check_value(d) != ""){
            return check_value(d);
        }
        x = stod(d);
        return "";
    }

    int set_values(string a){
        a = cut(a);
        ofstream ofs("..\\TestSuite\\TestResults.txt", ios::app);
            if(setx(a) != ""){
                ofs<<setx(a)<<"\n\n";
                ofs.close();
                return -1;
            }else{
                setx(a);
            }

            calc_sq();
            ofs<<"x = "<<getx()<<"; Square = "<<getsq()<<"\n\n";
            ofs.close();
            return 0;
    }

    ClassLab6_Kovalov(string a){
        set_values(a);
    }
 };
