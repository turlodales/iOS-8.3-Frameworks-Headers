//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUITrendingSearchPageViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSOperationQueue, NSString, SKUIClientContext, SKUICompletionList, SKUISearchBar, SKUISearchDisplayController, SSVLoadURLOperation, UISearchBar, UIViewController;

@interface SKUISearchFieldController : NSObject <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate>
{
    NSString *_baseHintsURLString;
    SKUIClientContext *_clientContext;
    SKUICompletionList *_completionList;
    id <SKUISearchFieldDelegate> _delegate;
    SSVLoadURLOperation *_loadOperation;
    int _numberOfSearchResults;
    NSOperationQueue *_operationQueue;
    SKUISearchBar *_searchBar;
    NSString *_searchBarAccessoryText;
    SKUISearchDisplayController *_searchDisplayController;
    NSString *_trendingSearchURLString;
}

@property(copy, nonatomic) NSString *trendingSearchURLString; // @synthesize trendingSearchURLString=_trendingSearchURLString;
@property(copy, nonatomic) NSString *searchHintsURLString; // @synthesize searchHintsURLString=_baseHintsURLString;
@property(copy, nonatomic) NSString *searchBarAccessoryText; // @synthesize searchBarAccessoryText=_searchBarAccessoryText;
- (BOOL)searchBarShouldBeginTouches:(id)arg1;
@property(nonatomic) BOOL showsResultsForEmptyField;
@property(readonly, nonatomic) UIViewController *contentsController;
- (void)_adjustInsetsForResultsTableView:(id)arg1;
- (void)_loadResultsForSearchRequest:(id)arg1;
- (void)_reloadTrendingVisibility;
- (id)initWithContentsController:(id)arg1;
- (id)URLForTrendingSearchPageView:(id)arg1;
- (void)resignActive:(BOOL)arg1;
- (void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2;
@property(nonatomic) int numberOfSearchResults; // @synthesize numberOfSearchResults=_numberOfSearchResults;
- (void)_setResponse:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadData;
- (void).cxx_destruct;
@property(nonatomic) BOOL displaysSearchBarInNavigationBar;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (Class)_resultsTableViewClass;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
@property(readonly, nonatomic) UISearchBar *searchBar;
@property(nonatomic) __weak id <SKUISearchFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)setSearchTerm:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
