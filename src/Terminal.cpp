/**
Terminal: contains the definition of the class Terminal
@file Terminal.cpp
@author Albert Lazaro de Lara
*/

#include "Terminal.hpp"
#include <cstdlib>

namespace CliWidget {

    void Terminal::showCursor(bool show) {
        if (show) {
            system("tput cnorm");
        }
        else {
            system("tput civis");
        }
    }

    void Terminal::showInput(bool show) {
        if (show) {
            system("stty echo");
        }
        else {
            system("stty -echo");
        }
    }

    void Terminal::enableSpecialCharacterProcessing(bool enable) {
        if (enable) {
            system("stty cbreak min 1 -echo");
        }
        else {
            system("stty sane");
        }
    }

    void Terminal::reset() {
        system("stty sane; tput cnorm");
    }
}
