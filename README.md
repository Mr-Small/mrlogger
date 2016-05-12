# mrlogger
Logger for C/C++.


## Description

The MrLogger class that can be changed Printer for usage.

## What Printer?

Specify the log output destination in Printer.

> Console Printer

If output to the console, using the following printer:
```c++
MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
logger->log(LOG_LEVEL_INFO, "infomation no.%d", 1);
```

> File Printer

If output to the file, using the following printer:
```c++
MrLogger<FilePrinter> *logger = new MrLogger<FilePrinter>("filename.log");
logger->log(LOG_LEVEL_WARN, "warning no.%d", 2);
```

## Usage

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[Mr-Small](https://github.com/Mr-Small)
