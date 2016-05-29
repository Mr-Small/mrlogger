#include <gtest/gtest.h>
#include "mrlogger.h"
#include "printer/console_printer.h"
#include "printer/file_printer.h"

using namespace mrlogger;

// Test default log level.
TEST(MrLogger, Default_LogLevel) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    ASSERT_EQ(LOG_LEVEL, logger->getLevel());
}

// Test set/get log level.
TEST(MrLogger, SetGet_LogLevel) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->setLevel(LOG_LEVEL_ERROR);
    ASSERT_EQ(LOG_LEVEL_ERROR, logger->getLevel());
}

// Test add log level.
TEST(MrLogger, Add_LogLevel) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->setLevel(LOG_LEVEL_INFO);
    logger->addLevel(LOG_LEVEL_WARN);
    logger->addLevel(LOG_LEVEL_ERROR);
    ASSERT_EQ(LOG_LEVEL, logger->getLevel());
}

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

// Test file printer log level infomation.
TEST(MrLogger, FilePrinter_LevelInfo) {

    MrLogger<FilePrinter> *logger = new MrLogger<FilePrinter>();
    logger->log(LOG_LEVEL_INFO, "Test NO %d", 11);

    FILE *fp = fopen("default.log", "r");
    ASSERT_TRUE(fp != NULL);
}
