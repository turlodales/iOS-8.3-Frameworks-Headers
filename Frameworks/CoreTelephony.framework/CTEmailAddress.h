//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTMessageAddress.h"
#import "NSCopying.h"

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;
}

+ (id)emailAddress:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;
- (id)encodedString;
- (id)initWithAddress:(id)arg1;

@end

