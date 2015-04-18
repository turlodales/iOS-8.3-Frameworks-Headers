//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCROBrailleTranslatorProtocol <NSObject>
- (NSString *)printBrailleForTechnicalText:(NSString *)arg1 locations:(id *)arg2;
- (NSString *)textForPrintBraille:(NSString *)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id *)arg4;
- (NSString *)printBrailleForText:(NSString *)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id *)arg4;
- (BOOL)activeTableSupportsTechnicalBraille;
- (BOOL)activeTableSupportsEightDotBraille;
- (BOOL)activeTableSupportsContractedBraille;
- (NSString *)activeTable;
- (void)setActiveTable:(NSString *)arg1;
- (unsigned int)interfaceVersion;
@end

