/**
  Input password: contains the definition of the class InputPassword
  @file InputPassword.hpp
  @author Albert Lazaro de Lara
  */

#ifndef INPUT_PASSWORD
#define INPUT_PASSWORD

#include <string>
#include "Terminal.hpp"

namespace CliWidget {

    /**
      Create a widget that lets the user to input their password
      */
    class InputPassword {
        public:
            InputPassword() = default;

            /**
              Get the entered password
              @return the password
              */
            std::string getValue();

            /**
              Sets the regex for validating the password
              @param regex The regex for validation
              */
            void setRegex(std::string regex);

            /**
              Display the widget in the terminal and captures the user input as password
              */
            void display();

            /**
              If a regex is setted, check if the password pass the regex
              @return true if regex is not setted or if the password pass the regex,
              false otherwise
              */
            bool check();
        private:
            /**
              The input password
              */
            std::string _value;

            /**
              The regex for checking the password
              */
            std::string _regex;

            CliWidget::Terminal _terminal;
    };
}
#endif
