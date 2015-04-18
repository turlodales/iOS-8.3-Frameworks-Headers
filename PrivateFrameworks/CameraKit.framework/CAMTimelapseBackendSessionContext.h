//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMTimelapseState, NSArray, NSString;

@interface CAMTimelapseBackendSessionContext : NSObject
{
    NSString *_timelapseUUID;
    CAMTimelapseState *_state;
    NSArray *_filesToDelete;
    NSArray *_filesToWrite;
}

@property(retain, nonatomic) NSArray *filesToWrite; // @synthesize filesToWrite=_filesToWrite;
@property(retain, nonatomic) NSArray *filesToDelete; // @synthesize filesToDelete=_filesToDelete;
@property(readonly, nonatomic) NSString *timelapseUUID; // @synthesize timelapseUUID=_timelapseUUID;
- (id)initWithTimelapseUUID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAMTimelapseState *state; // @synthesize state=_state;
- (id)description;
- (id)init;

@end

