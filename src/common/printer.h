#ifndef PRINTER_H
#define PRINTER_H

#include <stdbool.h>

enum protocol {
  lp = 0,
  ip = 1
};

struct printer {
  char* local_printer;
  char* lock_file;
  char* log_file;
  char* name;
  char* remote_printer;
  char* remote_host;
  char* spooling_dir;
  char* status_file;
  char* restr_group;
  long max_file_size;
  enum protocol proto;
  bool mult_copies;
  char pad[3]; /* padding to appease the compiler clang! */
};

#endif
