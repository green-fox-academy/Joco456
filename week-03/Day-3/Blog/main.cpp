#include <iostream>
#include <vector>
#include "Blog.h"

std::vector<BlogPost> Blogpostvector (){

    std::vector<BlogPost> blogs;

    blogs.push_back(BlogPost("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet", "2000.05.04."));
    blogs.push_back(BlogPost("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10."));
    blogs.push_back(BlogPost("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "2017.03.28."));

    return blogs;
}

int main() {

    Blog firstBlog(Blogpostvector());
    firstBlog.print();

    BlogPost newBlog("Balazs","Horanyban", "Sattarasattara", "2019.04.21");
    firstBlog.add(newBlog);
    std::cout << "New blog added by Balazs: " << std::endl;
    firstBlog.print();

    firstBlog.postDelete(2);
    std::cout << "Blog by William Turton should be now deleted: " << std::endl;
    firstBlog.print();

    BlogPost newBlog2("Mordi", "Horanyban", "Lehet, hogy eltevedt?", "2018.07.25");
    firstBlog.update(0, newBlog2);
    std::cout << "First blog should be now updated: from Mordi instead of John Doe: " << std::endl;
    firstBlog.print();







    return 0;
}