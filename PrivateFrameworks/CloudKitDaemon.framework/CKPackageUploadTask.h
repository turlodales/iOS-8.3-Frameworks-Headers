//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDCancelling.h"

@class CKDCancelTokenGroup, CKDMMCSItem, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSObject<OS_dispatch_group>;

@interface CKPackageUploadTask : NSObject <CKDCancelling>
{
    NSError *_error;
    CKPackage *_package;
    CKDMMCSItem *_MMCSManifestItem;
    NSArray *_MMCSSectionItems;
    CKDProgressTracker *_progressTracker;
    CKDMMCSRequestOptions *_MMCSRequestOptions;
    NSObject<OS_dispatch_group> *_group;
    CKDCancelTokenGroup *_cancelTokens;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *MMCSSectionItems; // @synthesize MMCSSectionItems=_MMCSSectionItems;
@property(retain, nonatomic) CKDMMCSItem *MMCSManifestItem; // @synthesize MMCSManifestItem=_MMCSManifestItem;
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(readonly, nonatomic) CKPackage *package; // @synthesize package=_package;
- (id)initWithPackage:(id)arg1 trackProgress:(BOOL)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (void)cancel;

@end

