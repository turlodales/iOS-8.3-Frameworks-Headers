//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityItemProvider.h"

@class RUStationShareInformationProvider;

@interface RUStationShareImageActivityItemProvider : UIActivityItemProvider
{
    RUStationShareInformationProvider *_shareInformationProvider;
}

@property(readonly, nonatomic) RUStationShareInformationProvider *shareInformationProvider; // @synthesize shareInformationProvider=_shareInformationProvider;
- (id)initWithShareInformationProvider:(id)arg1;
- (void).cxx_destruct;
- (id)item;

@end

