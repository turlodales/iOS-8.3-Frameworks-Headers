//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying>
{
    NSMutableArray *_xattrs;
}

+ (BOOL)removeXattrsOnFD:(int)arg1 includingContentRelated:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)loadXattrsFromFD:(int)arg1 structuralBlob:(id *)arg2 contentBlob:(id *)arg3 withMaximumSize:(unsigned int)arg4 error:(id *)arg5;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *xattrs; // @synthesize xattrs=_xattrs;
- (id)xattrsAtIndex:(unsigned int)arg1;
- (void)clearXattrs;
- (unsigned int)xattrsCount;
- (void)addXattrs:(id)arg1;
- (BOOL)applyToFileDescriptor:(int)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

