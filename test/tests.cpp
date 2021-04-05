// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "../include/train.h"

TEST(Train, test1) {
  Train* train = new Train;
  for (int i = 0; i < 10; i++) {
    Cage* cage = new Cage;
    train->addCage(cage);
  }
  EXPECT_EQ(train->counter(), 10);
}

TEST(Train, test2) {
  Train* train = new Train;
  for (int i = 0; i < 5; i++) {
    Cage* cage = new Cage;
    train->addCage(cage);
  }
  EXPECT_EQ(train->counter(), 5);
}

TEST(Train, test3) {
  Train* train = new Train;
  for (int i = 0; i < 20; i++) {
    Cage* cage = new Cage;
    train->addCage(cage);
  }
  EXPECT_EQ(train->counter(), 20);
}
