/**
  Terminal: contains the definition of the class Terminal
  @file Terminal.cpp
  @author Albert Lazaro de Lara
  */

#include "Terminal.hpp"
#include <cstdlib>

Terminal::showInput(bool show) {
    if (show) {
        system("tput civis");
    }
    else {
        system("stty sane");
    }
}

Terminal::enableSpecialCharacterProcessing(bool enable) {
    if (enable) {
       system("stty cbreak min 1 -echo; tput civis");
    }
    else {
       system("stty sane")
    }
}

Terminal::reset() {
    system("stty sane; tput cnorm");
}
