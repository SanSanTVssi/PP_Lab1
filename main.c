///
/// Created by Ааи on 07.02.2022.
///

#include "release_debug.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

int main(int argc, char ** argv) {
    char mode = 0;
    char sort_mode = 0;
    int w = 10;
    int h = 10;
    char arg;
    while((arg = getopt(argc, argv, "dw:h:sk")) != -1) {
        switch(arg) {
            case 'd': mode = 'd'; break;
            case 's': sort_mode = 's'; break;
            case 'k': sort_mode = 'k'; break;
            case 'w': w = atoi(optarg); break;
            case 'h': h = atoi(optarg); break;
            default: break;
        }
    }
    if (mode == 'd') {
        debug(w, h, sort_mode);
    }
    else {
        release(w, h, sort_mode);
    }
    return 0;
}
