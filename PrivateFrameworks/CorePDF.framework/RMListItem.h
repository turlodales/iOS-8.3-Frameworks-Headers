//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RMListItem : NSObject
{
    struct CGPDFNode **_paragraphs;
    unsigned int _count;
    unsigned int _pos;
}

@property(readonly) struct CGPDFNode **paragraphNodes; // @synthesize paragraphNodes=_paragraphs;
- (void)addParagraph:(struct CGPDFNode *)arg1;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (struct CGRect)bounds;
- (void)dealloc;
- (id)initWithCount:(unsigned int)arg1;

@end

