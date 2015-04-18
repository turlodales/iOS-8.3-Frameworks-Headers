//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TLSound;

@interface TLAlertTone : NSObject
{
    NSString *_filePath;
    TLSound *_actualSound;
    TLSound *_previewSound;
}

- (void)_setPreviewSound:(id)arg1;
- (void)_setActualSound:(id)arg1;
- (void)_setFilePath:(id)arg1;
@property(retain, nonatomic) TLSound *previewSound; // @synthesize previewSound=_previewSound;
@property(retain, nonatomic) TLSound *actualSound; // @synthesize actualSound=_actualSound;
- (id)initWithFilePath:(id)arg1 actualSoundID:(unsigned long)arg2 previewSoundID:(unsigned long)arg3;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)dealloc;

@end

