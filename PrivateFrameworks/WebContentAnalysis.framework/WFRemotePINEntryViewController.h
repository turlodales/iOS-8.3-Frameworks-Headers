//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "WFPINEntryViewControllerProtocol.h"

@class NSObject<WFPINEntryViewControllerProtocol>;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol>
{
    NSObject<WFPINEntryViewControllerProtocol> *_delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)userEnteredCorrectPIN;
- (void)setPageTitle:(id)arg1;
- (void)setURL:(id)arg1;
@property(nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)userDidCancel;

@end

