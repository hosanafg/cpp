#include <iostream>

//typedef std::string text;
using text = std::string;
using namespace std;

int main () {  

    cout << "Qual o seu nome?:  ";
    text name;
    cin >> name;
    cout << "hello, "<< name;

    return 0;
}