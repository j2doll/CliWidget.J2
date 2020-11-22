/**
  Input password: contains the definition of the class InputPassword
  @file InputPassword.cpp
  @author Albert Lazaro de Lara
  */


#include <iostream>
#include <regex>

#include "InputPassword.hpp"

namespace CliWidget {

    std::string InputPassword::getValue() {
        return _value;
    }

    void InputPassword::display() {
        _terminal.showInput(false);
        std::cout << _terminal.showCursor(false);
        getline(std::cin, _value);
        _terminal.reset();
        std::cout << _terminal.showCursor(true);
    }

    bool InputPassword::check() {
        return _regex.empty() || std::regex_match(_value, std::regex(_regex));
    }

    void InputPassword::setRegex(std::string regex) {
        _regex = regex;
    }
}
