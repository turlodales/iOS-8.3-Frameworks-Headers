//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKFileDataAccessor.h>

@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor
{
    NSData *_archiveData;
}

- (id)initWithData:(id)arg1 error:(id *)arg2;
- (void)_removeDiskRepresentation;
- (void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)archiveData;
- (void)dealloc;

@end

