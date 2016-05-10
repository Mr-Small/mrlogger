// file_printer.cpp
// author: Mr-Small

#include <fstream>
#include "printer/file_printer.h"

namespace mrlogger {

// Constructor.
FilePrinter::FilePrinter()
  : Printer() {
  fp_ = NULL;
}

// Destructor.
FilePrinter::~FilePrinter() {
}

// Print log to console.
void FilePrinter::print(int level, const char* message, va_list args) {

  if (fp_) {
    // Get current date time.
    std::string date_time = getDateTime(DATE_TIME_FORMAT);
    // Get log level string.
    std::string log_level = toLevelString(level);
    // File print.
    fprintf(fp_, "%s %s ", log_level.c_str(), date_time.c_str());

    // File print valiable.
    vfprintf(fp_, message, args);
  }
}

// Set log file name.
void FilePrinter::setFile(const char* file) {
  file_ = std::string(file);
}

// Open file.
void FilePrinter::open() {
  fp_ = fopen(file_.c_str(), "a");
}

// Close file.
void FilePrinter::close() {
  if (fp_) {
    fclose(fp_);
    fp_ = NULL;
  }
}

} // namespace mrlogger
