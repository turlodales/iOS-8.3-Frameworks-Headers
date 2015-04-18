//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSFormsMetadataProvider.h"

@class NSArray, NSString;

@interface WBUFormsMetadataProvider : NSObject <WBSFormsMetadataProvider>
{
    NSArray *_framesForAllForms;
    NSArray *_metadataForAllForms;
}

+ (id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2;
@property(readonly, nonatomic) unsigned int formCount;
- (void)enumerateFormsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

