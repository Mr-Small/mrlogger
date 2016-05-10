// printer.h
// author: Mr-Small

#ifndef PRINTER_H_
#define PRINTER_H_

#include "mrlogger.h"
#include <string>
#include <ctime>

namespace mrlogger {

#define LOG_LEVEL_UNKOWN_STR "<?>" // Unkown symbol.
#define LOG_LEVEL_INFO_STR   "<I>" // Infomation symbol.
#define LOG_LEVEL_WARN_STR   "<W>" // Warning symbol.
#define LOG_LEVEL_ERROR_STR  "<E>" // Error symbol.
#define LOG_LEVEL_DEBUG_STR  "<D>" // Debug symbol.

// Date time format e.g. 2016/05/06 10:10:30
#define DATE_TIME_FORMAT    "%Y/%m/%d %H:%M:%S"

// Class printer.
class Printer
{
public:
  // Constructor.
  Printer() {
  };

  // Destructor.
  virtual ~Printer() {
  };

  // Print to write log.
  virtual void print(int level, const char* message, va_list args) = 0;

  // Set log file name.
  virtual void setFile(const char* file) {
    // Do nothing.
  }

  // Open print stream. e.g.file
  virtual void open() {
    // Do nothing.
  }

  // Close print stream.
  virtual void close() {
    // Do nothing.
  }

protected:

  std::string toLevelString(unsigned int level) {
    std::string str = LOG_LEVEL_UNKOWN_STR;
    switch (level) {
      case LOG_LEVEL_INFO:
        str = LOG_LEVEL_INFO_STR;
        break;
      case LOG_LEVEL_WARN:
        str = LOG_LEVEL_WARN_STR;
        break;
      case LOG_LEVEL_ERROR:
        str = LOG_LEVEL_ERROR_STR;
        break;
      case LOG_LEVEL_DEBUG:
        str = LOG_LEVEL_DEBUG_STR;
        break;
      default:
        break;
    }
    return str;
  }

  // Get current date time string.
  std::string getDateTime(const char *format) {

    std::time_t t = std::time(NULL);
    char str[128] = {0};

    if (std::strftime(str, sizeof(str), format, std::localtime(&t))) {
      return std::string(str);
    }
    return std::string("");
  }
};

} // namespace mrlogger

#endif // PRINTER_H_
