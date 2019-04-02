#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream inputFile;
    inputFile.open("fileName.txt", ios::in);
    if(inputFile.good())
    {
        cout << "File has been opened/n" << endl;
        while(!inputFile.eof())
        {
            string tmp;
            inputFile >> tmp;
        }
        inputFile.close();


        fstream outputFile;
        outputFile.open("fileName2.txt", ios::out);
        if(!outputFile.good())
        {
            cout << "Sth went wrong, the file has not been created" << endl;
            return 0;
        }

//        outputFile <<
        outputFile.close();
    } else cout << "The file does not exist/n" << endl;
    return 0;
}
