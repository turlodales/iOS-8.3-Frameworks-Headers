//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSShareStateNotificationString : NSObject
{
    NSString *_sourcePersonID;
    NSString *_title;
    NSString *_body;
}

+ (id)notificationStringsWithTitle:(id)arg1 body:(id)arg2 sourcePersonID:(id)arg3;
@property(retain, nonatomic) NSString *sourcePersonID; // @synthesize sourcePersonID=_sourcePersonID;
- (id)initWithTitle:(id)arg1 body:(id)arg2 sourcePersonID:(id)arg3;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

