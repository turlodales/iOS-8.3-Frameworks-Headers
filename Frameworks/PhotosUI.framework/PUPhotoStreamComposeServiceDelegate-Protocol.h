//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUPhotoStreamComposeServiceViewController;

@protocol PUPhotoStreamComposeServiceDelegate <NSObject>
- (void)photoStreamComposeServiceDidCancel:(PUPhotoStreamComposeServiceViewController *)arg1;
- (void)photoStreamComposeService:(PUPhotoStreamComposeServiceViewController *)arg1 didPostComment:(NSString *)arg2;
@end

