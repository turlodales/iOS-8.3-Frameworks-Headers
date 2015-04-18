//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSDictionary, NSSet;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask
{
    NSSet *_searchItems;
    BOOL _applyToPrincipalCollectionSet;
    NSDictionary *_extraAttributes;
}

@property(retain, nonatomic) NSDictionary *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
- (id)requestBody;
@property(nonatomic) BOOL applyToPrincipalCollectionSet; // @synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (void)dealloc;
@property(retain, nonatomic) NSSet *searchItems; // @synthesize searchItems=_searchItems;

@end

