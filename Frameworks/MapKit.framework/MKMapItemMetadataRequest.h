//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKMapItem, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject
{
    MKMapItem *_mapItem;
}

@property(readonly, nonatomic) NSURLRequest *urlRequest;
- (void)handleError:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)handleData:(id)arg1;

@end
