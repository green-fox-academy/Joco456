cmake_minimum_required(VERSION 3.13)
project(Animal_protection)

set(CMAKE_CXX_STANDARD 14)

add_executable(Animal_protection main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h Parrot.cpp Parrot.h AnimalShelter.cpp AnimalShelter.h)