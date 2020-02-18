//
//  HumanConnectViewController.h
//  Copyright (c) 2016 Human API. All rights reserved.
//  Version 1.1
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

/** Flow type definition */
typedef NS_ENUM(NSInteger, HumanAPIFlowType) {
    FlowTypeAuthorize,
    FlowTypeConnect
};

/** Notifications (callbacks) specification */
@protocol HumanAPINotifications <NSObject>
@optional
- (void)onConnectSuccess:(NSString *)publicToken;
- (void)onConnectFailure:(NSString *)error;
@end

/**
 * HumanAPI UI component
 */
@interface HumanConnectViewController : UIViewController<WKNavigationDelegate>

@property (nonatomic, weak) id <HumanAPINotifications> delegate;
@property (nonatomic, retain) WKWebView *webView;
@property (nonatomic, retain) WKWebView *popupWebView;
@property NSString *clientID;
@property NSString *authURL;
@property NSString *authToken;
@property NSDictionary *options;
@property HumanAPIFlowType flowType;
@property CGFloat keyboardFixer;

- (id)initWithClientID:(NSString *)cliendID andAuthURL:(NSString *)authURL andAuthToken:(NSString *)authToken;
- (void)startConnectFlowForNewUser:(NSString *)userId;
- (void)startConnectFlowFor:(NSString *)userId andPublicToken:(NSString *)publicToken;

@end
