// console_printer.cpp
// author: Mr-Small
#include <stdio.h>
#include "printer/console_printer.h"

namespace mrlogger {

ConsolePrinter::ConsolePrinter()
  : Printer() {
}

ConsolePrinter::~ConsolePrinter() {
}

void ConsolePrinter::print(int level, const char* message, va_list args) {

  // TODO for debug.
  vprintf(message, args);
}

} // namespace mrlogger
