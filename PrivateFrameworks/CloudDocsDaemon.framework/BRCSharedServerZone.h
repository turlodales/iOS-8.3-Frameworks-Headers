//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCSharedLocalContainer, NSString;

@interface BRCSharedServerZone : BRCServerZone
{
    NSString *_ownerName;
    NSString *_mangledID;
}

- (id)asSharedZone;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
@property(readonly, nonatomic) NSString *mangledID; // @synthesize mangledID=_mangledID;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 plist:(id)arg4 session:(id)arg5;
@property(readonly, nonatomic) BOOL isSharedContainer;
@property(readonly, nonatomic) BOOL isPrivateContainer;
- (id)ownerName;
- (void).cxx_destruct;
@property(readonly, nonatomic) BRCSharedLocalContainer *container;

@end

