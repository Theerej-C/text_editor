#include <iostream>
#include <ncurses.h>
#include "base.h"
int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }
    TextEditor editor(argv[1]);
    editor.run();
    return 0;
}
