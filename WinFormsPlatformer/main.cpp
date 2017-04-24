#include <iostream>
#include "Database.h"

int main(){
    Database db;
    db.createRecord("hui 100500");
    db.createRecord("pizda 1005000");
    db.createRecord("dzihurda 9000");
    db.writeRecord();
    return 0;

}

