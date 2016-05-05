#include <gtest/gtest.h>
#include "mrlogger.h"
#include "printer/console_printer.h"

using namespace mrlogger;

TEST(MrLogger, ConsolePrinter) {

    MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
    logger->log(LOG_LEVEL_INFO, "hoge%d", 1);
}
