//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent
{
}

- (void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(BOOL)arg2 verticalOverflow:(BOOL)arg3;
@property(readonly) BOOL verticalOverflow;
@property(readonly) BOOL horizontalOverflow;
@property(readonly) unsigned short orient;

@end
