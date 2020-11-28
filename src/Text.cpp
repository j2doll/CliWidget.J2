/**
  Text widget: contains the implementation of the class Text
  @file Text.hpp
  @author Albert Lazaro de Lara
  @version 0.1 11/09/20 
  */

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

    void Text::setForegroundColor(CliWidget::ForegroundColor color) {
        _fgrColor = color;
    }

    void Text::setBold(bool enable) {
        formats.set(TextFormats::bold, true);
    }

    void Text::setUnderline(bool enable) {
        formats.set(TextFormats::underline, true);
    }

    void Text::setBlink(bool enable) {
        formats.set(TextFormats::blink, true);
    }

    void Text::setItalic(bool enable) {
        formats.set(TextFormats::italic, true);
    }

    void Text::display() {
        if (_bgrColor != CliWidget::BackgroundColor::NONE)
            std::cout << "\033[" << _bgrColor << "m";
        if (_fgrColor != CliWidget::ForegroundColor::NONE)
            std::cout << "\033[" << _fgrColor << "m";
        if (formats.test(TextFormats::bold))
            std::cout << "\033[" << "1m";
        if (formats.test(TextFormats::underline))
            std::cout << "\033[" << "4m";
        if (formats.test(TextFormats::blink))
            std::cout << "\033[" << "5m";
        if (formats.test(TextFormats::italic))
            std::cout << "\033[" << "3m";
        std::cout << _text << "\033[0m" << std::endl;
    }
}
