/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: Eagleye
 *
 * Created on August 27, 2018, 12:23 AM
 */

#ifndef JOHN_H
#define JOHN_H

class Person {
public:
    int age;
    Person(int);
    Person();
    Person operator+(Person);
};

#endif /* JOHN_H */

