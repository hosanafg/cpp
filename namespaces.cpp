#include <iostream>

//typedef std::string text;
using text = std::string;
using namespace std;

int main () {  

    //cout << "Qual o seu nome?:  ";
    cout << "Qual o seu nome completo?:  ";
    text name;
    //cin >> name;
    getline(cin,name);

    int number;
    cout << "Qual sua idade?:  ";
    cin >> number;

    cout << "hello, "<< name <<"\nYou're "<< number;

    return 0;
}