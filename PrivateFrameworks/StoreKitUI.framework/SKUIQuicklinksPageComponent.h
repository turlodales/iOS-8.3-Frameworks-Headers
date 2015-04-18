//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

#import "SSMetricsEventFieldProvider.h"

@class NSArray, NSString;

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider>
{
    NSArray *_links;
    NSString *_title;
}

- (void)_setLinksWithLinksArray:(id)arg1 context:(id)arg2;
- (id)metricsElementName;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)valueForMetricsField:(id)arg1;
- (int)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

