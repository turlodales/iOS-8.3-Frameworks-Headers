//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_MKCalloutAccessoryView.h"

@class NSString, UIView<_MKCalloutAccessoryView>;

@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView>
{
    UIView<_MKCalloutAccessoryView> *_view;
}

- (void).cxx_destruct;
- (id)initWithView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (void)_mapkit_setCalloutBackgroundColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
