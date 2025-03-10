/**
 * @file my_utils.c
 * @author DrkWithT (GitHub)
 * @brief Implements the my_utils.h functions for terminal coloring.
 * @date 2022-10-21
 */

#include "my_utils.h"

void console_set_color(int ansi_color) { printf(BEGIN_COLOR_MODE, ansi_color); }

void console_clear_color() { printf(RESET_COLOR_MODE); }

void console_clear_all()
{
  printf(CLEAR_SCR_SEQ); // erase all text
  printf(RESET_COLOR_MODE);
  printf(RESET_CUR_SEQ); // restore cursor to top left
  printf(RESET_COLOR_MODE);
}