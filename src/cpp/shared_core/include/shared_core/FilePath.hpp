 * Copyright (C) 2009-19 by RStudio, PBC
#if _WIN32
   /**
    * @brief Checks if a file can be written to by opening the file.
    *
    * To be successful, the file must already exist on the system.
    * If write access is not absolutely necessary, use isFileWriteable from FileMode.hpp.
    *
    * @return Success if file can be written to; system error otherwise (e.g. EPERM, ENOENT, etc.)
    */
   Error testWritePermissions() const;
