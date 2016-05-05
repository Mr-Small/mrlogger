// mrlogger.cpp
// author: Mr-Small

#include <time.h>
#include "mrlogger.h"

namespace MrLogger {

// Get singleton instance.
template <class __Printer>
MrLogger<__Printer>* MrLogger<__Printer>::getInstance() {
  static MrLogger<__Printer>* instance_ = NULL;

  if (instance_ == NULL) {
    instance_ = new MrLogger<__Printer>();
  }
  return instance_;
}

// Set log level.
template <class __Printer>
void MrLogger<__Printer>::setLevel(unsigned int level) {
  level_ = level;
}

// Get log level.
template <class __Printer>
unsigned int MrLogger<__Printer>::getLevel() {
  return level_;
}

// Write log by __Printer.
template <class __Printer>
void MrLogger<__Printer>::log(unsigned int level, const char* message, ...) {

}

// private:

// Constructor.
template <class __Printer>
MrLogger<__Printer>::MrLogger()
  : level_(LOG_LEVEL) {
}

// Not copy.
template <class __Printer>
MrLogger<__Printer>::MrLogger(const MrLogger &obj) {
}

// Not copy.
template <class __Printer>
MrLogger<__Printer>& MrLogger<__Printer>::operator=(const MrLogger &obj) {
}

} // namespace MrLogger
