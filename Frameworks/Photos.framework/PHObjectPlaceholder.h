//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject
{
    NSString *_localIdentifier;
    int _assetMediaType;
}

- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localIdentifier;
@property int assetMediaType; // @synthesize assetMediaType=_assetMediaType;
- (id)initWithLocalIdentifier:(id)arg1;

@end

