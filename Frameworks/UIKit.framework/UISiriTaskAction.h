//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAction.h"

@class AFSiriTask;

@interface UISiriTaskAction : BSAction
{
}

- (id)initWithPayload:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
@property(readonly, retain, nonatomic) AFSiriTask *payload;
- (int)UIActionType;

@end

