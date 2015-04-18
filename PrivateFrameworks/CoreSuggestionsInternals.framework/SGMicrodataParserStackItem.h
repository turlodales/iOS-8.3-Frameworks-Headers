//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SGMicrodataDocument;

@interface SGMicrodataParserStackItem : NSObject
{
    SGMicrodataDocument *_document;
    SGMicrodataParserStackItem *_parent;
    NSArray *_textConsumers;
    NSArray *_itemScopes;
}

@property(readonly) SGMicrodataParserStackItem *parent; // @synthesize parent=_parent;
- (id)initWithParent:(id)arg1 item:(id)arg2 htmlId:(id)arg3 textConsumer:(id)arg4;
@property(readonly) NSArray *textConsumers; // @synthesize textConsumers=_textConsumers;
@property(readonly) NSArray *itemScopes; // @synthesize itemScopes=_itemScopes;
- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1;
@property(readonly) SGMicrodataDocument *document; // @synthesize document=_document;

@end

