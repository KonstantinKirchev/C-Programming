#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char buffer[100];
  time_t curtime;
  struct tm *loctime;

  /* Get the current time. */
  curtime = time (NULL);

  /* Convert it to local time representation. */
  loctime = localtime (&curtime);

  /* Print it out in a nice format. */
  strftime (buffer, 100, "%d %B %Y %H:%M:%S\n", loctime);
  fputs (buffer, stdout);

  return 0;
}

