// Copyright 2021
#include <iostream>
#include <string>
#include <random>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

#include "train.h"

int main() {
  Train* train = new Train;
  for (int i = 0; i < 20; i++) {
    Cage* cage = new Cage;
    train->addCage(cage);
  }
  std::cout << train->counter() << std::endl;
  return 0;
}

