// silent_printer.cpp
// author: Mr-Small
#include "printer/silent_printer.h"

namespace mrlogger {

// Constructor.
SilentPrinter::SilentPrinter()
  : Printer() {
}

// Destructor.
SilentPrinter::~SilentPrinter() {
}

// Not print anywhere.
void SilentPrinter::print(int level, const char* message, va_list args) {
  // Do nothing!!.
}

} // namespace mrlogger
