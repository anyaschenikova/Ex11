// Copyright 2021 Schenikova
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>

#include "../include/train.h"

int main() {
  Train* train = new Train;
  for (int i = 0; i < 20; i++) {
    Cage* cage = new Cage;
    train->addCage(cage);
  }
  std::cout << train->counter() << std::endl;
  return 0;
}

