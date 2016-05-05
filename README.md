# mrlogger
Logger for C/C++.


## Description

The MrLogger class that can be changed Printer for usage.

## What Printer?

Specify the log output destination in Printer.

If output to the console, using the following printer:
```c++
MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
logger->log(LOG_LEVEL_INFO, "infomation no.%d", 1);
```

## Usage

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[Mr-Small](https://github.com/Mr-Small)
