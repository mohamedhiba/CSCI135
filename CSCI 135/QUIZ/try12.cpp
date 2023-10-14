// JUST TRYING TO UNDERSTAND BRUHHHHH
#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;
int main (){
    double quiz1 , quiz2 , quiz3;
    string date;

    ifstream fin("text.tsv");
    if (!fin){
        cerr << "File was unable to open.";
        exit(1);
    }
    string junk;
    getline(fin, junk);

    while (fin >> date >> quiz1 >> quiz2 >> quiz3){
        fin.ignore(INT_MAX,'\n');
        cout << date << "is weird "<< quiz1<< endl;
    }
    fin.close();
    return 0;
}