//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class WBSSQLiteRow, WBSSQLiteStatement;

@interface WBSSQLiteRowEnumerator : NSEnumerator
{
    WBSSQLiteStatement *_statement;
    WBSSQLiteRow *_row;
    int _lastResultCode;
}

@property(readonly, nonatomic) int lastResultCode; // @synthesize lastResultCode=_lastResultCode;
- (id)initWithResultsOfStatement:(id)arg1;
@property(readonly, nonatomic) WBSSQLiteStatement *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;
- (id)nextObject;

@end

