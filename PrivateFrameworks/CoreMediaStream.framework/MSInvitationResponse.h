//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSShare;

@interface MSInvitationResponse : NSObject
{
    MSShare *_invitation;
    BOOL _accept;
}

+ (id)responseWithInvitation:(id)arg1 accept:(BOOL)arg2;
@property(nonatomic) BOOL accept; // @synthesize accept=_accept;
@property(retain, nonatomic) MSShare *invitation; // @synthesize invitation=_invitation;
- (id)initWithInvitation:(id)arg1 accept:(BOOL)arg2;
- (void).cxx_destruct;

@end

