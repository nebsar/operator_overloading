/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on August 27, 2018, 12:23 AM
 */

#include <cstdlib>
#include<iostream>
#include "Person.h"

using namespace std;

int main() {
    Person p1(25);
    Person p2(39);
    Person p;

    p = p1 + p2;
    
    cout<<p.age<<endl;

}

