//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int listIsFlat:1;
    unsigned int showAll:1;
    unsigned int showColors:1;
    unsigned int allSelected:1;
    unsigned int allowsRotation:1;
    unsigned int allowsEdit:1;
    unsigned int showsDoneButton:1;
    unsigned int showsCancelButton:1;
    unsigned int showsWritableCalendarsOnly:1;
    unsigned int showsRefreshButton:1;
    unsigned int allowsPullToRefresh:1;
} CDStruct_a7a51b3b;

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    double _field6;
} CDStruct_79f9e052;

