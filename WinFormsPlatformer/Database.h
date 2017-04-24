#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "Level.h"

using namespace std;

class Database
{
private:
    vector<string> records; //TODO: Make top 10 of the greatest players
    vector<Level> levels;

    Level parseLevelString(string);

public:
	Database();
	void createRecord(string);
    void writeRecord();
    void readRecords();
    void readLevels();
    void updateRecord(int);
    void updateLevel(int);
    void deleteRecords(int);
    void deleteLevel(int);
};

