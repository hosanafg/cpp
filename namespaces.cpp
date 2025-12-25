#include <iostream>

//typedef std::string text;
using text = std::string;
using namespace std;

int main () {  

    //cout << "Qual o seu nome?:  ";
    cout << "Digite um numero de 1 a 10: ";
    int numero;
    cin >> numero;

    cout << "Qual o seu nome completo?:  ";
    text name;
    //cin >> name;
    getline(cin>>ws,name);

    int number;
    cout << "Qual sua idade?:  ";
    cin >> number;

    cout << numero <<"\n"<< "hello, "<< name <<"\nYou're "<< number;

    return 0;
}