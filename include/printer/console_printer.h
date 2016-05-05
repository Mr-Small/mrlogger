// console_printer.h
// author: Mr-Small

#ifndef CONSOLE_PRINTER_H_
#define CONSOLE_PRINTER_H_

#include "printer.h"

namespace mrlogger {

// Print to console class.
class ConsolePrinter : public Printer {

public:
  // Constructor.
  ConsolePrinter();

  // Destructor.
  virtual ~ConsolePrinter();

  // Print to console for log.
  virtual void print(int level, const char* message, va_list args);
};

} // namespace mrlogger

#endif // CONSOLE_PRINTER_H_
