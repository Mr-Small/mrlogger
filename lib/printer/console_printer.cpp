// console_printer.cpp
// author: Mr-Small
#include <stdio.h>
#include "printer/console_printer.h"

namespace mrlogger {


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

  printf("%s %s ", log_level.c_str(), date_time.c_str());

  // TODO for debug.
  vprintf(message, args);
}

} // namespace mrlogger
