//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CIBurstFaceConfigEntry : NSObject
{
    int faceId;
    struct CGRect faceRect;
    int framesSinceLast;
}

@property int framesSinceLast; // @synthesize framesSinceLast;
@property struct CGRect faceRect; // @synthesize faceRect;
@property int faceId; // @synthesize faceId;
- (id)initWithRect:(struct CGRect)arg1 withFaceId:(int)arg2;

@end

