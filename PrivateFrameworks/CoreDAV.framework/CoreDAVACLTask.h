//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;

@interface CoreDAVACLTask : CoreDAVTask
{
    NSArray *_accessControlEntities;
}

- (id)requestBody;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
@property(retain, nonatomic) NSArray *accessControlEntities; // @synthesize accessControlEntities=_accessControlEntities;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CoreDAVACLTaskDelegate> delegate; // @dynamic delegate;

@end

