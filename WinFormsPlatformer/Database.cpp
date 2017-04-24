#include "Database.h"
Database::Database()
{
}

void Database::createRecord(string highscore) {
    this->records.push_back(highscore);
}

void Database::readRecords() {
    ifstream fin;
    string input = "";
    fin.open("records.txt");
    if(fin.is_open()){
        while(fin.peek() != EOF){
            getline(fin, input);
            this->records.push_back(input);
        }
    }
    else{
        cout << "There is no DB file!\b";
    }
    fin.close();
}

void Database::readLevels() {
    Level level;
    string input;
    ifstream fin;
    fin.open("levels.txt");
    if(fin.is_open()){
        while(fin.peek() != EOF){
            getline(fin, input);
            this->levels.push_back(parseLevelString(input));
        }
    }
    else{
        cout << "There is no levels database!\n";
    }
}

Level Database::parseLevelString(string) {
    //TODO: something
    return Level();
}

void Database::writeRecord() {
    ofstream fout;
    fout.open("records.txt");
    for(int i = 0; i < records.size(); i++){
        fout << records[i] << endl;
    }
    fout.close();
}
