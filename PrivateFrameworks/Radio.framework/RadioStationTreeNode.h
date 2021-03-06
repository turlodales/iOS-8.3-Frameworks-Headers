//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSDictionary, NSString, RadioArtworkCollection;

@interface RadioStationTreeNode : NSObject <NSCopying, NSMutableCopying>
{
    RadioArtworkCollection *_artworkCollection;
    int _childNodeLoadingStyle;
    NSArray *_childNodes;
    int _displayStyle;
    BOOL _hasAdditionalChildNodes;
    NSString *_name;
    long long _nodeID;
    NSDictionary *_stationDictionary;
    NSDictionary *_stationTreeNodeDictionary;
}

@property(readonly, nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
- (id)initWithStationTreeNodeDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *stationDictionary; // @synthesize stationDictionary=_stationDictionary;
@property(readonly, nonatomic) int childNodeLoadingStyle; // @synthesize childNodeLoadingStyle=_childNodeLoadingStyle;
@property(readonly, nonatomic) BOOL hasAdditionalChildNodes; // @synthesize hasAdditionalChildNodes=_hasAdditionalChildNodes;
@property(readonly, copy, nonatomic) NSDictionary *stationTreeNodeDictionary; // @synthesize stationTreeNodeDictionary=_stationTreeNodeDictionary;
@property(readonly, nonatomic) long long nodeID; // @synthesize nodeID=_nodeID;
@property(readonly, copy, nonatomic) RadioArtworkCollection *artworkCollection; // @synthesize artworkCollection=_artworkCollection;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

