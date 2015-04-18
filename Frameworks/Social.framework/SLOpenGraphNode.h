//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface SLOpenGraphNode : NSObject
{
    BOOL _likedByMe;
    unsigned int _numberOfLikes;
    unsigned int _numberOfFriendLikes;
    NSURL *_URL;
    NSArray *_likedByFriends;
    int _fetchState;
}

@property(readonly) unsigned int globalLikeCount;
@property(readonly) unsigned int friendLikeCount;
- (void).cxx_destruct;
- (id)cache;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
@property(nonatomic) int fetchState; // @synthesize fetchState=_fetchState;
@property(readonly) NSArray *likedByFriends; // @synthesize likedByFriends=_likedByFriends;
- (void)unlikeWithCompletion:(CDUnknownBlockType)arg1;
- (void)likeWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly) BOOL likedByMe;
- (void)_startUpdateIfNeeded;

@end

