// file_printer.cpp
// author: Mr-Small

#include "printer/file_printer.h"

namespace mrlogger {

// Constructor.
FilePrinter::FilePrinter()
  : Printer() {
}

// Destructor.
FilePrinter::~FilePrinter() {
}

// Print log to console.
void FilePrinter::print(int level, const char* message, va_list args) {

  // TODO for debug.
  printf("file %s", file_.c_str());
}

// Set log file name.
void FilePrinter::setFile(const char* file) {
  file_ = std::string(file);
}

} // namespace mrlogger
