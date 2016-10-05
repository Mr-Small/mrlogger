// silent_printer.h
// author: Mr-Small

#ifndef SILENT_PRINTER_H_
#define SILENT_PRINTER_H_

#include "printer.h"

namespace mrlogger {

// Do nothing.
class SilentPrinter : public Printer {

public:
  // Constructor.
  SilentPrinter();

  // Destructor.
  virtual ~SilentPrinter();

  // Do nothing.
  virtual void print(int level, const char* message, va_list args);
};

} // namespace mrlogger

#endif // SILENT_PRINTER_H_
