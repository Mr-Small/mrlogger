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

> Silent Printer

If not output, using the following printer:
```c++
MrLogger<SilentPrinter> *logger = new MrLogger<SilentPrinter>();
logger->log(LOG_LEVEL_DEBUG, "debug no.%d", 3);
```


## Log Level

As the level of the log is following:

* **LOG_LEVEL_NONE**

  Not print log.
* **LOG_LEVEL_INFO**

  Print information log.
* **LOG_LEVEL_WARN**

  Print warning log.
* **LOG_LEVEL_ERROR**

  Print error log.
* **LOG_LEVEL_DEBUG**

  Print debug log.

> Set log level

Print only debug log in the following example.

```c++
MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
logger->setLevel(LOG_LEVEL_DEBUG);
```

> Add log level

Print debug and information log in the following example.

```c++
MrLogger<ConsolePrinter> *logger = new MrLogger<ConsolePrinter>();
logger->setLevel(LOG_LEVEL_DEBUG);
logger->addLevel(LOG_LEVEL_INFO); // debug + info
```

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[Mr-Small](https://github.com/Mr-Small)
