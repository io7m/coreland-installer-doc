/* Copy file/example to /usr/local/bin/example
 * The filename will be automatically transformed to the correct
 * platform-specific name, such as 'example.exe' if necessary. */

{ INST_COPY_EXEC, "file/example", NULL, "/usr/local/bin", NULL, NULL, 0755 }

/* Copy file/example to /usr/local/bin/renamed
 * The filename will be automatically transformed to the correct
 * platform-specific name, such as 'renamed.exe' if necessary. */

{ INST_COPY_EXEC, "file/example", "renamed", "/usr/local/bin", NULL, NULL, 0755 }
