#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Movie {
    private:
        string title;
        int setYearReleased;
        string setScreenWriter;

    public:
    void setTitle(const string& t) {title = t;}
    void setYearReleased(int y) {setYearReleased = y;}
    voide setScreenWriter(const tring& sw) {setScreenWriter = sw;}

    voide print() const {

    }
};


int main () {
    ifstream intputFile("input.txt");
    if (!inputFile) {
        cout << "Error: coult not open 'input.txt'" << endl;
        return 0;
    }

    string title, writer;
    int year;
    



    Movie test;
    test.setTitle("something");
    test.setYearReleased("sometihn");
    test.setScreenWriter("something");
    test.print();

    return 0;
}