// console_printer.cpp
// author: Mr-Small
#include <stdio.h>
#include "printer/console_printer.h"

namespace mrlogger {

#if defined(_WIN32) || defined(_WIN64)

#include <windows.h>

#ifndef TRACE
#define TRACE(fmt, ...) \
  { \
      char c[1024] = {0}; \
      sprintf(c, fmt, __VA_ARGS__); \
      OutputDebugStringA(c); \
   }
#endif // TRACE

#ifndef VTRACE
#define VTRACE(msg, arg) \
  { \
      char c[1024] = {0}; \
      vsprintf(c, msg, arg); \
      OutputDebugStringA(c); \
  }
#endif // VTRACE

#define PRINT(fmt, ...) { printf(fmt, __VA_ARGS__); TRACE(fmt, __VA_ARGS__); }
#define VPRINT(msg, arg) { vprintf(msg, arg); VTRACE(msg, arg); }

#else
#define PRINT(fmt, ...) { printf(fmt, __VA_ARGS__); }
#define VPRINT(msg, arg) { vprintf(msg, arg); }
#endif


// Constructor.
ConsolePrinter::ConsolePrinter()
  : Printer() {
}

// Destructor.
ConsolePrinter::~ConsolePrinter() {
}

// Print log to console.
void ConsolePrinter::print(int level, const char* message, va_list args) {

  // Get current date time.
  std::string date_time = getDateTime(DATE_TIME_FORMAT);
  // Get log level string.
  std::string log_level = toLevelString(level);

  PRINT("%s %s ", log_level.c_str(), date_time.c_str());

  // Print to console.
  VPRINT(message, args);

  // Line feed.
  std::string lf = getLineFeed();
  PRINT(lf.c_str());
}

} // namespace mrlogger
