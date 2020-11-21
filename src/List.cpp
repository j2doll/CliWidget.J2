/**
List: contains the implementation of the class List
@file List.cpp
@author Albert Lazaro de Lara
*/

#include "List.hpp"

namespace CliWidget {

    List::List(const std::vector<std::string>& options) : _options(options)
    {

    }

    void List::setOptions(const std::vector<std::string>& options) {
        _options = options;
    }

    std::vector<std::string>& List::getOptions() {
        return _options;
    }


    void List::addOption(const std::string& option) {
        _options.push_back(option);
    }

    void List::removeOption(unsigned int index) {
        _options.erase(_options.begin() + index);
    }

    void List::setBackgroundColor(CliWidget::BackgroundColor bgColor) {
        _bgColor = bgColor;
    }

    std::ostream& List::setTerminalCursor(std::ostream &stream) {
        return stream << "\033[" << _options.size() << "A\033[99D";
    }
}
