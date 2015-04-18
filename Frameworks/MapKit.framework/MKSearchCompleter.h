//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSString;

@interface MKSearchCompleter : NSObject
{
    NSString *_fragment;
    CDStruct_feeb6407 _boundingRegion;
    id <MKSearchCompleterDelegate> _delegate;
    id _context;
    NSString *_identifier;
    int _entriesType;
    int _listType;
    double _timeSinceLastInBoundingRegion;
    CLLocation *_deviceLocation;
}

+ (id)alloc;
- (void)retry;
@property(nonatomic) int entriesType; // @synthesize entriesType=_entriesType;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(retain, nonatomic) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(copy, nonatomic) NSString *fragment; // @synthesize fragment=_fragment;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *results;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MKSearchCompleterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)cancel;
@property(nonatomic) double timeSinceLastInBoundingRegion; // @synthesize timeSinceLastInBoundingRegion=_timeSinceLastInBoundingRegion;
@property(nonatomic) CDStruct_90e2a262 boundingRegion; // @synthesize boundingRegion=_boundingRegion;
- (BOOL)resultsAreCurrent;
- (BOOL)isSearching;

@end

