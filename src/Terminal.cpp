/**
Terminal: contains the definition of the class Terminal
@file Terminal.cpp
@author Albert Lazaro de Lara
*/

#include "Terminal.hpp"
#include <cstdlib>

namespace CliWidget {

    std::string Terminal::showCursor(bool show) {
        if (show) {
            return "\e[?25h";
        }
        else {
            return "\e[?25l";
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
