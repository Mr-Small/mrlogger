// printer.h
// author: Mr-Small

#ifndef PRINTER_H_
#define PRINTER_H_

namespace mrlogger {

// Class printer.
class Printer
{
public:
  // Constructor.
	Printer() {
	};

  // Destructor.
	virtual ~Printer() {
	};

  // Print to write log.
	virtual void print(int level, const char* message, va_list args) = 0;
};

} // namespace mrlogger

#endif // PRINTER_H_
