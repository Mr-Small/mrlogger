// file_printer.h
// author: Mr-Small

#ifndef FILE_PRINTER_H_
#define FILE_PRINTER_H_

#include "printer.h"

namespace mrlogger {


// Print to file class.
class FilePrinter : public Printer {

public:
  // Constructor.
  FilePrinter();

  // Destructor.
  virtual ~FilePrinter();

  // Print to console for log.
  virtual void print(int level, const char* message, va_list args);

  // Set log file name.
  virtual void setFile(const char* file);

  // Open file.
  virtual void open();

  // Close file.
  virtual void close();

private:
  FILE *fp_;
  std::string file_;
};

} // namespace mrlogger

#endif // FILE_PRINTER_H_
