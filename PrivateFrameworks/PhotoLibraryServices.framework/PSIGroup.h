//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject
{
    NSMutableString *_contentString;
    unsigned long long _compressedRanges[2];
    struct _NSRange _tokenRanges[8];
    unsigned int _tokenRangesCount;
    short _category;
    struct __CFArray *_assetIds;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
}

+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_1ef3fb1f *)arg2 count:(long)arg3;
+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;
@property(retain, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (struct _NSRange)tokenRangeAtIndex:(unsigned int)arg1;
- (unsigned int)tokenRangesCount;
- (int)compareToGroup:(id)arg1;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (void)prepareForReuse;
@property(nonatomic) short category; // @synthesize category=_category;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;

@end
