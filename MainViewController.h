//
//  MainViewController.h
//  TableSearch
//
//  Created by Ahad Rana on 1/31/12.
//  Copyright (c) 2012 Factual Inc. All rights reserved.
//


#import <FactualSDK/FactualAPI.h>
#import <FactualSDK/FactualQuery.h>

@interface MainViewController : UITableViewController 
  <UISearchDisplayDelegate, UISearchBarDelegate,FactualAPIDelegate>
{
	// The saved state of the search UI if a memory warning removed the view.
  NSString		*_savedSearchTerm;
  UISearchBar* _searchBar;
  FactualAPIRequest* _activeRequest;
  NSMutableDictionary* _prefs;
  FactualQueryResult* _queryResult;
  UILabel* _statusLabel;
  UIActivityIndicatorView* _indicatorView;
  CLLocation* _queryLocation;
  NSArray* _idleStateToolbarItems;
  NSArray* _queryActiveStateToolbarItems;
  NSTimeInterval _requestStartTime;
  BOOL _locationEnabled;
  BOOL _trackingEnabled;
  NSString* _gpsStatusTxt;
  NSString* _apiStatusTxt;
  BOOL _refreshRequired;
}

@property (nonatomic)         NSMutableDictionary* prefs;
@property (nonatomic, copy)   NSString *savedSearchTerm;
@property (nonatomic) BOOL    searchWasActive;
@property (nonatomic,retain)  UISearchBar* searchBar;
@property (nonatomic,retain)  FactualQueryResult* queryResult;
           
-(IBAction) doQuery:(id) sender;
-(IBAction) doEditPreferences:(id) sender;
-(NSString*) currentTable;

@end
