#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string oldWord = "bots";

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!
    url.replace(url.find(oldWord), oldWord.size(),"odds");
    url.insert(5,":",1);
    std::cout << url << std::endl;

    return 0;
}