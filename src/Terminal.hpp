/**
  Terminal: contains the definition of the class Terminal
  @file Terminal.hpp
  @author Albert Lazaro de Lara
  */

#ifndef TERMINAL
#define TERMINAL

#include <string>

namespace CliWidget {

    /**
      Class for manipulate the terminal state 
      */
    class Terminal {
        public:
            Terminal() = default;

            /**
             show or hide the terminal cursor
             @param show True to show, False to hide
             */
            std::string showCursor(bool show);

            /**
             show or hide the input that the user is writting in terminal
             @param show True to show, False to hide
             */
            std::string showInput(bool show);

            /**
             enable the processing of character one by one
             @param enable the flag to enable the special character or return to
             the default mode
             */
            void enableSpecialCharacterProcessing(bool enable);

            /**
             Reset the terminal to its default status
             */
            void reset();
    };
}

#endif

