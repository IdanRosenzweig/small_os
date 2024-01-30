#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);

    print_str("test for x64 operating system\n");
    print_str("another line\n");
    print_str("another line\n");
    print_str("another line\n");
}
