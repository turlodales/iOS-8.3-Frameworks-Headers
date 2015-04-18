//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

#import "CMMapperRoot.h"

@class CMArchiveManager, NSString, WDDocument;

@interface WMDocumentMapper : CMMapper <CMMapperRoot>
{
    CMArchiveManager *mArchiver;
    WDDocument *wDom;
    NSString *mFileName;
}

- (void)setFileName:(id)arg1;
- (void)mapWithState:(id)arg1;
- (id)initWithWDom:(id)arg1 archiver:(id)arg2;
- (id)archiver;
- (id)styleMatrix;
- (BOOL)hasSessionBreakAtIndex:(unsigned int)arg1;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (id)documentTitle;
- (float)bottomMargin;
- (float)headerMargin;
- (float)leftMargin;
- (struct CGSize)contentSizeForDevice;
- (struct CGSize)pageSizeForDevice;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)arg1;
- (float)rightMargin;
- (void)dealloc;
- (float)topMargin;
- (id)fileName;

@end

