//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFAirDropBrowser;

@protocol SFAirDropBrowserDelegate <NSObject>
- (void)browserDidChangePeople:(SFAirDropBrowser *)arg1;
- (void)browser:(SFAirDropBrowser *)arg1 didDeletePersonAtIndex:(unsigned int)arg2;
- (void)browser:(SFAirDropBrowser *)arg1 didInsertPersonAtIndex:(unsigned int)arg2;
- (void)browserWillChangePeople:(SFAirDropBrowser *)arg1;
@end

