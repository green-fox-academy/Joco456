//
// Created by Admin on 17/04/2019.
//

#include "PostIt.h"


const std::string &PostIt::getBackroundColor() const {
    return backroundColor;
}

const std::string &PostIt::getText() const {
    return text;
}

const std::string &PostIt::getTextColor() const {
    return textColor;
}

void PostIt::setBackroundColor(const std::string &backroundColor) {
    PostIt::backroundColor = backroundColor;
}

void PostIt::setText(const std::string &text) {
    PostIt::text = text;
}

void PostIt::setTextColor(const std::string &textColor) {
    PostIt::textColor = textColor;
}

PostIt::PostIt(const std::string &backroundColor, const std::string &text, const std::string &textColor)
        : backroundColor(backroundColor), text(text), textColor(textColor) {}
