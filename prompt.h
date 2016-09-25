#ifndef PROMPT_H
#define PROMPT_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "debug.h"



/*abs_dir is the absolute path, this function adjusts it and get more
readable result*/
void adjust_dir_name(char *abs_dir, char *last_dir);

/*print the prompt which contains basic info, like username,
hostname, working directory
 *now it only prints the last directory name, not intelligent enough */
void print_prompt();

#endif