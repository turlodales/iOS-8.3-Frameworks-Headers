//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSVURLDataConsumer.h"

@interface SKUIStorePageDataConsumer : SSVURLDataConsumer
{
    Class _storePageClass;
}

@property(nonatomic) Class storePageClass; // @synthesize storePageClass=_storePageClass;
- (id)storePageWithDictionary:(id)arg1;
- (id)_newFeaturedContentComponentForKind:(int)arg1 context:(id)arg2;
- (id)_newCustomPageComponentForBlockType:(id)arg1 context:(id)arg2;
- (id)_newPageComponentContextWithDictionary:(id)arg1;
- (id)_customPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_bannerRoomComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_artistPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_chartPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_multiRoomComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_roomComponentsForDictionary:(id)arg1 items:(id)arg2 gridType:(int)arg3;
- (id)_groupingPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_backgroundArtworkWithDictionary:(id)arg1;
- (id)storePageWithDictionary:(id)arg1 response:(id)arg2;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)init;

@end

