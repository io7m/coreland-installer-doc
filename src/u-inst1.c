#include <stdio.h>
#include <stdlib.h>

#include "install.h"

int
main (void)
{
  unsigned int index;
  struct install_status_t status;

  status = install_init ("conf-sosuffix");
  if (status.status != INSTALL_STATUS_OK) {
    fprintf (stderr, "fatal: init: %s - %s\n", 
      status.message, install_error (errno));
    exit (1);
  }

  for (index = 0; index < insthier_size; ++index) {
    status = install (&insthier [index], 0);
    switch (status.status) {
      case INSTALL_STATUS_OK:
        break;
      case INSTALL_STATUS_ERROR;
        fprintf (stderr, "error: %s\n", status.message);
        break;
      case INSTALL_STATUS_FATAL:
        fprintf (stderr, "fatal: %s\n", status.message);
        exit (1);
        break;
    }
  }

  return 0;
}
