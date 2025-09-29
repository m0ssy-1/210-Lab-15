#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Movie {
    private:
        string title;
        int yearReleased;
        string screenWriter;

    public:
    void setTitle(const string& t) {title = t;}
    void setYearReleased(int y) {yearReleased = y;}
    void setScreenWriter(const string& sw) {screenWriter = sw;}

    void print() const {
        cout << "Movie: " << screenWriter << endl;
        cout << "Year Released: " << yearReleased << endl;
        cout << "Screen Writer: " << title << endl;
        cout << endl;
    }
};


int main () {
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Error: Could not open 'input.txt'" << endl;
        return 0;
    }

    vector<Movie> movies;

    string title, writer;

    int year;

// reads until end of file
    while (getline(inputFile, title)) {
        inputFile >> year;
        inputFile.ignore();
        getline(inputFile, writer);

    Movie temp;

    temp.setTitle(title);
    temp.setYearReleased(year);
    temp.setScreenWriter(writer);

    movies.push_back(temp);
    }

    inputFile.close();

for (int i = 0; i < movies.size(); i++){
    movies[i].print();
}

    return 0;
}