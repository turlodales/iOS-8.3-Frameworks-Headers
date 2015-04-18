//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKAppDocument, IKViewElementStyle, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface IKViewElement : NSObject
{
    BOOL _disabled;
    BOOL _impressionable;
    NSString *_elementID;
    unsigned int _elementType;
    NSString *_elementName;
    IKViewElement *_parent;
    NSArray *_children;
    NSDictionary *_attributes;
    IKViewElementStyle *_style;
    NSString *_accessibilityText;
    NSString *_autoHighlightIdentifier;
    unsigned int _updateType;
    NSArray *_features;
    IKAppDocument *_appDocument;
    NSString *_itmlID;
    NSMutableDictionary *_metadataDict;
    NSMutableSet *_activeSingularEvents;
}

+ (BOOL)shouldParseChildDOMElements;
+ (id)supportedFeatures;
+ (unsigned int)evaluateElementUpdateTypeAndReset:(id)arg1;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic, getter=isImpressionable) BOOL impressionable; // @synthesize impressionable=_impressionable;
@property(nonatomic) __weak IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(readonly, copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property(readonly, retain, nonatomic) NSString *itmlID; // @synthesize itmlID=_itmlID;
- (void)dispatchEventOfType:(unsigned int)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) unsigned int updateType; // @synthesize updateType=_updateType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
@property(readonly, nonatomic) unsigned int elementType; // @synthesize elementType=_elementType;
@property(nonatomic) __weak IKViewElement *parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSString *autoHighlightIdentifier; // @synthesize autoHighlightIdentifier=_autoHighlightIdentifier;
@property(retain, nonatomic) NSMutableDictionary *metadataDict; // @synthesize metadataDict=_metadataDict;
@property(retain, nonatomic) NSMutableSet *activeSingularEvents; // @synthesize activeSingularEvents=_activeSingularEvents;
- (void)_applyUpdatesToChildrenWithElements:(id)arg1;
- (void)_reorderAndUpdateChildrenWithElements:(id)arg1;
- (id)childImageElementWithType:(unsigned int)arg1;
- (id)childTextElementWithStyle:(unsigned int)arg1;
- (id)childElementWithType:(unsigned int)arg1;
- (id)childElementsWithType:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, retain, nonatomic) IKViewElementStyle *style; // @synthesize style=_style;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;

@end

