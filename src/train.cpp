// Copyright 2021 Schenikova 

#include "train.h"
#include <random>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

void Train::addCage(Cage * newCage) {
  std::minstd_rand simple_rand;
  simple_rand.seed(time(0));
  bool flag = simple_rand() % 2;
  if (flag) {
    newCage->on();
  } else {
    newCage->off();
  }
  if (this->end == nullptr && this->begin == nullptr) {
    this->begin = newCage;
    this->end = newCage;
    return;
  }
  if (this->begin->next == nullptr && this->begin->prev) {
    this->begin->next = newCage;
    this->begin->prev = newCage;
    this->end = newCage;
    newCage->next = this->begin;
    newCage->prev = this->begin;
    return;
  }
  newCage->prev = this->end;
  this->end->next = newCage;
  this->end = newCage;
  this->begin->prev = newCage;
  newCage->next = this->begin;
}

int Train::counter() {
  if (!this->begin->get()) {
    this->begin->on();
  }
  this->end = this->begin->next;
  while (true) {
    ++size;
    // std::cout << size << std::endl;
    if (!this->end->get()) {
      this->end = this->end->next;
    } else {
      this->end->off();
      if (!this->begin->get()) {
        break;
      } else {
        this->end = this->begin->next;
        size = 0;
        continue;
      }
    }
  }
  return size;
} 

