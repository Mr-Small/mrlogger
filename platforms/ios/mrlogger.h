// mrlogger.h
// author: Mr-Small

#ifndef mrlogger_h
#define mrlogger_h

#import <Foundation/Foundation.h>

@interface MrSmall : NSObject
-(void)info : (NSString*)message;
-(void)warn : (NSString*)message;
-(void)error : (NSString*)message;
-(void)debug : (NSString*)message;
@end

#endif /* mrlogger_h */
