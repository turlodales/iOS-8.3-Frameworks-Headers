//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAKView.h"

#import "WebPDFDocumentRepresentation.h"
#import "WebPDFDocumentView.h"

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>
{
    BOOL dataSourceHasBeenSet;
    struct CGPDFDocument *_PDFDocument;
    NSString *_title;
    struct CGRect *_pageRects;
}

+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)arg1;
+ (struct CGColor *)shadowColor;
+ (struct CGColor *)backgroundColor;
- (unsigned int)pageNumberForRect:(struct CGRect)arg1;
- (void)_computePageRects;
- (void)_checkPDFTitle;
- (void)drawPage:(struct CGPDFPage *)arg1;
- (id)_pagesInRect:(struct CGRect)arg1;
- (id)documentSource;
- (BOOL)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (struct CGPDFDocument *)doc;
- (struct CGRect)rectForPageNumber:(unsigned int)arg1;
- (unsigned int)totalPages;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)layout;
- (id)title;
- (void)setDataSource:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

