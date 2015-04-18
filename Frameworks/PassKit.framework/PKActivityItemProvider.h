//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityItemProvider.h"

@class NSData, NSString, PKPassView;

@interface PKActivityItemProvider : UIActivityItemProvider
{
    NSData *_passData;
    PKPassView *_passView;
    NSString *_passOrganizationName;
}

- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)item;
- (void)dealloc;
- (id)initWithPass:(id)arg1 andPassView:(id)arg2;

@end

