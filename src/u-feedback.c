#include <stdio.h>
#include <stdlib.h>

#include "install.h"

struct index_t {
  unsigned int value;
};

void
info_callback (const char *message, void *data)
{
  struct index_t *index = data;
  fprintf (stderr, "info: [%u] %s\n", index->value, message);
}

void
warn_callback (const char *message, void *data)
{
  struct index_t *index = data;
  fprintf (stderr, "warn: [%u] %s\n", index->value, message);
}

int
main (void)
{
  unsigned int index;
  struct install_status_t status;
  struct index_t data;

  status = install_init ("conf-sosuffix");
  if (status.status != INSTALL_STATUS_OK) {
    fprintf (stderr, "fatal: init: %s - %s\n", status.message, status.error_message);
    exit (1);
  }

  install_callback_info_set (info_callback);
  install_callback_warn_set (warn_callback);
  install_callback_data_set (&data);

  for (index = 0; index < insthier_size; ++index) {
    data.value = index;
    status = install (&insthier [index], 0);
    switch (status.status) {
      case INSTALL_STATUS_OK:
        break;
      case INSTALL_STATUS_ERROR;
        fprintf (stderr, "error: %s - %s\n", status.message, status.error_message);
        break;
      case INSTALL_STATUS_FATAL:
        fprintf (stderr, "fatal: %s - %s\n", status.message, status.error_message);
        exit (1);
        break;
    }
  }

  return 0;
}
