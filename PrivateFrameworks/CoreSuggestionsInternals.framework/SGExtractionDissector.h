//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGPipelineDissector.h"

@class NSString, NSXPCConnection, SGAsset;

@interface SGExtractionDissector : NSObject <SGPipelineDissector>
{
    NSXPCConnection *_xpcConnection;
    id <SGReverseTemplateJS> _reverseTemplateJS;
    SGAsset *_asset;
}

+ (id)addressDictionaryToString:(id)arg1;
+ (id)parseISO8601:(id)arg1;
+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2;
- (id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2;
- (id)entityForJS:(id)arg1;
- (void)dissect:(id)arg1;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

