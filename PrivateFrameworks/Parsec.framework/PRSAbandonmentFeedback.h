//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@interface PRSAbandonmentFeedback : PRSFeedback
{
    unsigned int _method;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2 method:(unsigned int)arg3;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)plist;
@property(readonly, nonatomic) unsigned int method; // @synthesize method=_method;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

