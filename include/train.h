// Copyright 2021 Schenikova

#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

#include <iostream>

class Cage {
 private:
  bool light;  // Свет (вкл/выкл)
 public:
  Cage* next;  // следующий вагон
  Cage* prev;  // предыдущий вагон
  Cage(): light(false), next(nullptr), prev(nullptr) {}
  void on()  { light = true; }
  void off() { light = false; }
  bool get() const  { return light; }
};

class Train {
 private:
  Cage* begin;  // указатель на первый вагон
  Cage* end;  // указатель на последний вагон
  int size;
 public:
  Train(): begin(nullptr), end(nullptr), size(0) {}
  void addCage(Cage * newCage);
  friend Cage;
  int counter();
  void setLight();
};

#endif  // INCLUDE_TRAIN_H_
