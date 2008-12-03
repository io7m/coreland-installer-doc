struct install_status_t {
  enum {
    INSTALL_STATUS_OK,
    INSTALL_STATUS_ERROR,
    INSTALL_STATUS_FATAL
  } status;
  const char *message;
};
