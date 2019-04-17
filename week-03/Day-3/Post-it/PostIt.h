//
// Created by Admin on 17/04/2019.
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H

#include <iostream>


class PostIt {


public:
    const std::string &getBackroundColor() const;

    const std::string &getText() const;

    const std::string &getTextColor() const;

    PostIt(const std::string &backroundColor, const std::string &text, const std::string &textColor);

    void setBackroundColor(const std::string &backroundColor);

    void setText(const std::string &text);

    void setTextColor(const std::string &textColor);

private:
    std::string text;
    std::string textColor;
    std::string backroundColor;



};


#endif //POST_IT_POSTIT_H
