/* Copyright (C) 2006 Peter Selinger. This file is distributed under
   the terms of the GNU General Public License. See the file COPYING
   for details. */

#include <stdio.h>
#include <unistd.h>

/* do something innocent */
int main_good(int ac, char *av[]) {
  char buf[10];
  fprintf(stdout, "Hello, world!\n");
  fprintf(stdout, "\n(press enter to quit)");
  fflush(stdout);
  fgets(buf, 10, stdin);
  return 0;
}

/* do something evil */
int main_evil(int ac, char *av[]) {
  char buf[10];
  fprintf(stdout, "Your doomsday just began\n");
  fprintf(stdout, "Terminating humanity...");
  fflush(stdout);
  sleep(1);
  fprintf(stdout, "Sinister laugh!\n");
  fflush(stdout);
  fgets(buf, 10, stdin);
  return 0;
}
