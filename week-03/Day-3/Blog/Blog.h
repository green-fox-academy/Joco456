//
// Created by Admin on 21/04/2019.
//

#ifndef BLOG_BLOG_H
#define BLOG_BLOG_H

#include <vector>
#include <iostream>
#include "BlogPost.h"


class Blog {

public:
    Blog (std::vector<BlogPost> blogPost);

    void add (BlogPost newPost);
    void postDelete (int index);
    void update(int index, BlogPost blogpost);

    void print ();

    int getSize ();


private:
    std::vector<BlogPost> _blogPost;

};


#endif //BLOG_BLOG_H
