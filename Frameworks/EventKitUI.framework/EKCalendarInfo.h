//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendar, EKGroupInfo, NSString, UIColor, UIImage;

@interface EKCalendarInfo : NSObject
{
    NSString *_title;
    BOOL _selected;
    EKCalendar *_calendar;
    UIColor *_color;
    EKGroupInfo *_group;
    int _customGroupType;
}

@property(readonly, nonatomic) BOOL isShared;
- (id)initWithCalendar:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak EKGroupInfo *group; // @synthesize group=_group;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) BOOL isEditable;
@property(readonly, copy, nonatomic) NSString *title;
- (id)description;
@property(readonly, nonatomic) UIImage *icon;
@property(nonatomic) int customGroupType; // @synthesize customGroupType=_customGroupType;
- (void)_updateCustomGroupType;
@property(readonly, nonatomic) UIImage *highlightedIcon;
@property(readonly, nonatomic) BOOL excludeFromSelectAll;
@property(readonly, nonatomic) BOOL isPublished;
@property(readonly, nonatomic) int displayOrder;
@property(readonly, nonatomic) BOOL isSubscribed;

@end

