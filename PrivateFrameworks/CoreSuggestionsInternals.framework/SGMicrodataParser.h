//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SGMicrodataParserStackItem;

@interface SGMicrodataParser : NSObject
{
    SGMicrodataParserStackItem *_stackItem;
}

+ (id)parse:(id)arg1;
+ (id)whitespaceSplit:(id)arg1;
- (void)endElement;
@property(readonly, nonatomic) SGMicrodataParserStackItem *stackItem; // @synthesize stackItem=_stackItem;
- (void)textContent:(id)arg1;
- (void)startElement:(id)arg1 withAttributes:(id)arg2;
- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1;

@end

