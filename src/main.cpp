#include <vector>
#include <iostream>
#include <string>

#include "Select.hpp"
#include "MultiSelect.hpp"
#include "Text.hpp"
#include "InputPassword.hpp"

int main() {

    CliWidget::Select select(std::vector<std::string> {"One", "Two", "Three 한글"});
    select.setBackgroundColor(CliWidget::BackgroundColor::GREEN);
    select.display();

    CliWidget::Text text1("Selected index is " + std::to_string(select.getSelectedIndex()) + "");
    // text1.setBackgroundColor(CliWidget::BackgroundColor::GREEN);
    text1.setForegroundColor(CliWidget::ForegroundColor::BLUE);
    text1.setUnderline(true);
    text1.setBold(true);
    text1.display();

    CliWidget::Text text2("Selected value is " + select.getSelectedValue() + "");
    text2.setForegroundColor(CliWidget::ForegroundColor::BLUE);
    text2.setItalic(true);
    text2.setBlink(true);
    text2.display();

    CliWidget::MultiSelect multiSelect(std::vector<std::string>{"Cat", "Dog", "Hamster", "Bird", "Fish"});
    multiSelect.setBackgroundColor(CliWidget::BackgroundColor::BLUE);
    multiSelect.display();

    std::string strText3 = "Selected indexes are ";
    for (int index : multiSelect.getSelectedIndexes()) {
        strText3 += std::to_string(index) + " ";
    }
    CliWidget::Text text3(strText3);
    text3.setForegroundColor(CliWidget::ForegroundColor::BLUE);
    text3.display();

    std::string strText4 = "Selected values are ";
    for (std::string value : multiSelect.getSelectedValues()) {
        strText4 += value + " ";
    }
    CliWidget::Text text4(strText4);
    text4.setForegroundColor(CliWidget::ForegroundColor::BLUE);
    text4.display();

    CliWidget::Text textPwd("Insert a Password:");
    textPwd.display();

    CliWidget::InputPassword inputPsw;
    inputPsw.setRegex("^.{6,}");
    inputPsw.display();

    CliWidget::Text textResult("The entered password is " + inputPsw.getValue());
    textResult.setForegroundColor(CliWidget::ForegroundColor::BLUE);
    textResult.setBold(true);
    textResult.display();

    if (!inputPsw.check()) {
        CliWidget::Text textResult("The password is too short.");
        textResult.setForegroundColor(CliWidget::ForegroundColor::BLUE);
        textResult.display();
    }

    return 0;
}
