//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSKeyedArchiverDelegate.h"

@class NSString;

@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate>
{
    BOOL _imageIsNamed;
}

@property(nonatomic) BOOL imageIsNamed; // @synthesize imageIsNamed=_imageIsNamed;
- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

