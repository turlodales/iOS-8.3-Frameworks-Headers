//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIBarButtonItem, UIViewController;

@interface MusicPickerOverlay : NSObject
{
    BOOL _allowsMultipleSelections;
    id <MusicPickerOverlayDelegate> _delegate;
    UIViewController *_viewController;
}

@property(nonatomic) BOOL allowsMultipleSelections; // @synthesize allowsMultipleSelections=_allowsMultipleSelections;
- (void)viewController:(id)arg1 didPickAllEntitiesFromDataSource:(id)arg2;
- (void)viewController:(id)arg1 didPickEntity:(id)arg2;
- (BOOL)shouldDisplayEntityAsDisabled:(id)arg1;
- (BOOL)shouldDisplayAddAllAsDisabledFromDataSource:(id)arg1;
- (void)loadViewController;
- (void)finish;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property(readonly, nonatomic) NSString *title;
@property(nonatomic) __weak id <MusicPickerOverlayDelegate> delegate; // @synthesize delegate=_delegate;

@end

