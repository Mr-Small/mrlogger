// mrlogger.h
// author: Mr-Small

#ifndef MRLOGGER_H_
#define MRLOGGER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#ifndef NULL
#define NULL (0)
#endif

namespace mrlogger {

#define LOG_LEVEL_NONE        (0x00000000) // Not print log.
#define LOG_LEVEL_INFO        (0x00000001) // Print infomation log.
#define LOG_LEVEL_WARN        (0x00000010) // Print warning log.
#define LOG_LEVEL_ERROR       (0x00000100) // Print error log.
#define LOG_LEVEL_DEBUG       (0x00001000) // Print debug log.

#define LOG_LEVEL	(LOG_LEVEL_INFO | LOG_LEVEL_WARN | LOG_LEVEL_ERROR)

// Use file_printer.
#define DEFAULT_FILE_NAME      "default.log"

template <class __Printer>
class MrLogger {
public:

  // Constructor.
  MrLogger()
    : level_(LOG_LEVEL) {
      printer_.setFile(DEFAULT_FILE_NAME);
      printer_.open();
  }

  // Constructor with log file name.
  MrLogger(const char *file)
    : level_(LOG_LEVEL) {
      printer_.setFile(file);
      printer_.open();
  }

  // Destructor.
  virtual ~MrLogger() {
    printer_.close();
  }

  // Set log level.
  void setLevel(unsigned int level) {
    level_ = level;
  }

  void addLevel(unsigned int level) {
    level_ |= level;
  }

  // Get log level.
  unsigned int getLevel() {
    return level_;
  }

  // write log.
  void log(unsigned int level, const char* message, ...) {

    if (checkLevel(level)) {
      // Parse arguments.
      va_list args;
      va_start(args, message);

      // Print log.
      printer_.print(level, message, args);
      va_end(args);
    }
  }

private:

  // Check log level.
  bool checkLevel(unsigned int level) {
    if (level_ == LOG_LEVEL_NONE
      || level == LOG_LEVEL_NONE) {
        // Do nothing.
        return false;
    }
    return level_ & level;
  }

  unsigned int level_;
  __Printer printer_;
};

} // namespace mrlogger

#endif // MRLOGGER_H_
