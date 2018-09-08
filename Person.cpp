/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.cpp
 * Author: Eagleye
 * 
 * Created on August 27, 2018, 12:23 AM
 */

#include "Person.h"

Person::Person() {
}

Person::Person(int a)
: age(a) // ikisi de olur
{
    age = a; // ikisi de olur
}

Person Person::operator+(Person currentPerson) {
    Person newPerson;
    newPerson.age = age + currentPerson.age;
    return newPerson;
}



