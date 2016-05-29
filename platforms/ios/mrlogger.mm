// mrlogger.mm
// author: Mr-Small

#import <Foundation/Foundation.h>

#import "mrlogger.h"
#import "include/mrlogger.h"
#import "include/printer/console_printer.h"

@implementation MrSmall {
    mrlogger::MrLogger<mrlogger::ConsolePrinter> * instance;
}

-(id)init {
    self = [super init];
    instance = new mrlogger::MrLogger<mrlogger::ConsolePrinter>();
    return self;
}

-(void)info:(NSString *)message {
    instance->log(LOG_LEVEL_INFO, (char *) [message UTF8String]);
}

-(void)warn:(NSString *)message {
    instance->log(LOG_LEVEL_WARN, (char *) [message UTF8String]);
}

-(void)error:(NSString *)message {
    instance->log(LOG_LEVEL_ERROR, (char *) [message UTF8String]);
}

-(void)debug:(NSString *)message {
    instance->log(LOG_LEVEL_DEBUG, (char *) [message UTF8String]);
}
@end