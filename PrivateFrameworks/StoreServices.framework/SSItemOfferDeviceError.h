//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject
{
    NSString *_localizedMessage;
    NSString *_localizedTitle;
    NSString *_localizedURLTitle;
    NSURL *_url;
}

@property(readonly, nonatomic) NSString *localizedURLTitle; // @synthesize localizedURLTitle=_localizedURLTitle;
- (id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void)dealloc;
@property(readonly, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;

@end

