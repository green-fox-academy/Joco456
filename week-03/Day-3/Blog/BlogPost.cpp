//
// Created by Admin on 17/04/2019.
//

#include "BlogPost.h"
#include <string>

const std::string &BlogPost::getAuthorName() const {
    return authorName;
}

const std::string &BlogPost::getTitle() const {
    return title;
}

const std::string &BlogPost::getText() const {
    return text;
}

const std::string &BlogPost::getPublicationDate() const {
    return publicationDate;
}

void BlogPost::setAuthorName(const std::string &authorName) {
    BlogPost::authorName = authorName;
}

void BlogPost::setTitle(const std::string &title) {
    BlogPost::title = title;
}

void BlogPost::setText(const std::string &text) {
    BlogPost::text = text;
}

void BlogPost::setPublicationDate(const std::string &publicationDate) {
    BlogPost::publicationDate = publicationDate;
}

BlogPost::BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string &publicationDate) : authorName(authorName), title(title), text(text),
                                                         publicationDate(publicationDate) {}

std::string BlogPost::toString(){
    return ("Author Name: " + getAuthorName() + " Title: " + getTitle() + " Text: " + getText() + "Publication Date: " + getPublicationDate());
}
