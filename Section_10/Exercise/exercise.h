#pragma once
#include <stdio.h>
#include <stdint.h>

uint32_t colour_to_int(char r, char g, char b);
void int_to_color(uint32_t val, char *r, char *g, char *b);
