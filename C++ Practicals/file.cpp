// Copy the data of one file to another file.                                                                                                   

using namespace std;

#include<iostream>
#include<fstream>

int main() {
    ifstream _read("file3.txt");
    ofstream _write("file4.txt");

    char ch;
    while(_read.get(ch)){
            _write << ch;
    }
    _write.close();
    _read.close();

    cout<<"Content copied successfully.";
    return 0;
}

