//
// Created by Admin on 17/04/2019.
//
#include <string>
#include <iostream>
#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H


class BlogPost {

private:
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;
public:
    void setAuthorName(const std::string &authorName);

    void setTitle(const std::string &title);

    void setText(const std::string &text);

    void setPublicationDate(const std::string &publicationDate);

    const std::string &getAuthorName() const;

    const std::string &getTitle() const;

    const std::string &getText() const;

    const std::string &getPublicationDate() const;

    BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
             const std::string &publicationDate);

    std::string toString();
};


#endif //BLOGPOST_BLOGPOST_H
