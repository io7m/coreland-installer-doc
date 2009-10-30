/* Copy file/example.c to /usr/local/share/example.c */

{ INST_COPY, "file/example.c", NULL, "/usr/local/share", NULL, NULL, 0644 }

/* Copy file/example.c to /usr/local/share/renamed.c */

{ INST_COPY, "file/example.c", "renamed.c", "/usr/local/share", NULL, NULL, 0644 }
