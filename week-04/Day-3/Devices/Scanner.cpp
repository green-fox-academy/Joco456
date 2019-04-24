//
// Created by Admin on 24/04/2019.
//

#include "Scanner.h"

Scanner::Scanner(int speed) {
    _speed = speed;

}

void Scanner::scan() {

    std::cout << "I'm scanning a document " << _speed << " ppm" << std::endl;

}
