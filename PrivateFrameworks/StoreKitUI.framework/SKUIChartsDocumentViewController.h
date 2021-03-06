//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIDocumentViewController.h"

@class NSMutableArray, NSString, SKUIChartColumnsView, SKUIChartsTemplateViewElement;

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (id)_columnViewControllers;
- (struct UIEdgeInsets)_chartInsets;
- (int)_visibleColumnCountForWidth:(float)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

