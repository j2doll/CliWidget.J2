#include "Text.hpp"

namespace CliWidget {
    Text::Text(const std::string &text): _text(text) {
    
    }
    
    void Text::setText(const std::string &text) {
        _text = text;
    }

    std::string& Text::getText() {
        return _text;
    }

    void Text::setBackgroundColor(CliWidget::BackgroundColor color) {
        _bgrColor = color;
    }

    std::ostream& Text::display(std::ostream &stream) {
       return stream << "\033[" << _bgrColor << "m" << _text << "\033[0m" << std::endl;
    }
}