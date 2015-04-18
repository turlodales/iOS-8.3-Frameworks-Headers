//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<WebDocumentView>, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject
{
    NSObject<WebDocumentView> *_documentView;
    float _scaleFactor;
    struct CGSize _layoutSize;
    NSArray *_pageRects;
    UIWebDocumentView *_webDocumentView;
}

@property(retain, nonatomic) UIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
- (struct CGSize)sizeForPageAtIndex:(int)arg1;
@property(readonly, nonatomic) float lastPageHeight;
@property(readonly, nonatomic) unsigned int pageCount;
- (struct CGSize)layoutSize;
- (float)scaleFactor;
- (id)pageRects;
- (id)initWithDocumentView:(id)arg1 scaleFactor:(float)arg2 layoutSize:(struct CGSize)arg3 pageRects:(id)arg4;
- (id)documentView;
- (void)dealloc;

@end

