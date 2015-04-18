//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation
{
    CKShare *_share;
    CDUnknownBlockType _shareSaveCompletionBlock;
}

- (id)initWithShare:(id)arg1;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
@property(copy) CDUnknownBlockType shareSaveCompletionBlock; // @synthesize shareSaveCompletionBlock=_shareSaveCompletionBlock;
- (void)main;
- (void)dealloc;

@end

