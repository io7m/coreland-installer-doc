#include "install.h"

#define REPOS "/usr/local/share/installer"

struct install_item insthier[] = {
  {INST_MKDIR, NULL,              NULL, REPOS, NULL, NULL, 0755},
  {INST_COPY,  "deinstaller.c",   NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "generic-conf.c",  NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "install-error.c", NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "install-posix.c", NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "install-win32.c", NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "install.c",       NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "installer.c",     NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "instchk.c",       NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "insthier.c",      NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "ctxt.h",          NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "install.h",       NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "install_os.h",    NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "install.sld",     NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "deinstaller.ld",  NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "installer.ld",    NULL, REPOS, NULL, NULL, 0644},
  {INST_COPY,  "instchk.ld",      NULL, REPOS, NULL, NULL, 0644},
};
unsigned long insthier_len = sizeof(insthier) / sizeof(struct install_item);
