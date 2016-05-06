#include <gtest/gtest.h>
#include "mrlogger.h"
#include "printer/console_printer.h"

using namespace mrlogger;

// Test console printer log level infomation.
TEST(MrLogger, ConsolePrinter_LevelInfo) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->log(LOG_LEVEL_INFO, "Test NO %d", 1);
}

// Test console printer log level warning.
TEST(MrLogger, ConsolePrinter_LevelWarn) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->log(LOG_LEVEL_WARN, "Test NO %d", 2);
}

// Test console printer log level error.
TEST(MrLogger, ConsolePrinter_LevelError) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->log(LOG_LEVEL_ERROR, "Test NO %d", 3);
}

// Test console printer log level debug.
TEST(MrLogger, ConsolePrinter_LevelDebug) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->setLevel(LOG_LEVEL | LOG_LEVEL_DEBUG);
    logger->log(LOG_LEVEL_DEBUG, "Test NO %d", 4);
}

// Test console printer log level none.
TEST(MrLogger, ConsolePrinter_LevelNone) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->log(LOG_LEVEL_NONE, "none print");
}
