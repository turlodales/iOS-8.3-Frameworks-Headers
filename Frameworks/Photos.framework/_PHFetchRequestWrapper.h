//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSFetchRequest, NSManagedObjectID;

@interface _PHFetchRequestWrapper : NSObject <NSCopying>
{
    unsigned int _hash;
    NSFetchRequest *_fetchRequest;
    NSManagedObjectID *_containerIdentifier;
}

@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) NSManagedObjectID *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int hash; // @synthesize hash=_hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2;

@end

