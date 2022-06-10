#include "connection.hpp"

connection::connection(string id, int ID_A, int ID_B, int weight){
    this->id = id;
    this->ID_A = ID_A;
    this->ID_B = ID_B;
    this->weight = weight;
}

string connection::getID(){
    return id;
}

int connection::getID_A(){
    return ID_A;
}



int connection::getID_B(){
    return ID_B;
}

int connection::getWeigth(){
    return weight;
}