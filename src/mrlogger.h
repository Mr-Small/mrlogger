// mrlogger.h
// author: Mr-Small

#ifndef MRLOGGER_H_
#define MRLOGGER_H_

#include <stdio.h>
#include <stdarg.h>

#ifndef NULL
#define NULL (0)
#endif

namespace MrLogger {

#define LOG_LEVEL_NONE        (0x00000000) // Not print log.
#define LOG_LEVEL_INFO        (0x00000001) // Print infomation log.
#define LOG_LEVEL_WARN        (0x00000010) // Print warning log.
#define LOG_LEVEL_ERROR       (0x00000100) // Print error log.
#define LOG_LEVEL_DEBUG       (0x00001000) // Print debug log.

#define LOG_LEVEL	(LOG_LEVEL_INFO | LOG_LEVEL_WARN | LOG_LEVEL_ERROR)

template <class __Printer>
class MrLogger {
public:

  // Get singleton instance.
  static MrLogger<__Printer>* getInstance();

  // Set log level.
  void setLevel(unsigned int level);

  // Get log level.
  unsigned int getLevel();

  // write log.
  void log(unsigned int level, const char* message, ...);

private:

  // Private constructor.
  // Not create instance.
  MrLogger();

  // Copy constructor.
  MrLogger(const MrLogger &obj);

  // =operator
  MrLogger &operator=(const MrLogger &obj);

  unsigned int level_;
  __Printer printer_;
};

} // namespace MrLogger

#endif // MRLOGGER_H_
