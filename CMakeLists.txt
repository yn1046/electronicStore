cmake_minimum_required(VERSION 3.20)
project(electronicStore)

set(CMAKE_CXX_STANDARD 14)

add_executable(electronicStore main.cpp Models/Device.cpp Models/Device.h Models/Appliances.cpp Models/Appliances.h Models/IElectronics.h Models/VacuumCleaner.cpp Models/VacuumCleaner.h Models/Smartphone.cpp Models/Smartphone.h Models/Laptop.cpp Models/Laptop.h)
