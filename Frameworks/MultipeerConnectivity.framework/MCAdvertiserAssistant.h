/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView, NSString, MCNearbyServiceAdvertiser, NSDictionary, MCPeerID, MCSession, NSMutableArray, <MCAdvertiserAssistantDelegate>, NSBundle;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate, UIAlertViewDelegate> {
    <MCAdvertiserAssistantDelegate> *_delegate;
    bool_isAdvertising;
    bool_wasAdvertising;
    MCSession *_session;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    MCPeerID *_myPeerID;
    MCNearbyServiceAdvertiser *_advertiser;
    NSMutableArray *_invitationsBuffer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invitationHandlerForPresentedAlert;

    NSString *_appName;
    NSBundle *_frameworkBundle;
    UIAlertView *_alertView;
}

@property <MCAdvertiserAssistantDelegate> * delegate;
@property(retain) MCSession * session;
@property(copy) NSDictionary * discoveryInfo;
@property(copy) NSString * serviceType;
@property(copy) MCPeerID * myPeerID;
@property(retain) MCNearbyServiceAdvertiser * advertiser;
@property(retain) NSMutableArray * invitationsBuffer;
@property(copy) id invitationHandlerForPresentedAlert;
@property(copy,readonly) NSString * appName;
@property bool isAdvertising;
@property bool wasAdvertising;
@property(retain) NSBundle * frameworkBundle;
@property(retain) UIAlertView * alertView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setInvitationsBuffer:(id)arg1;
- (void)setAdvertiser:(id)arg1;
- (id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3;
- (void)presentNextInvitation;
- (id)appName;
- (void)setInvitationHandlerForPresentedAlert:(id)arg1;
- (id)invitationsBuffer;
- (id)invitationHandlerForPresentedAlert;
- (id)advertiser;
- (void)setDiscoveryInfo:(id)arg1;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(id)arg4;
- (bool)wasAdvertising;
- (void)setWasAdvertising:(bool)arg1;
- (bool)isAdvertising;
- (id)discoveryInfo;
- (void)setFrameworkBundle:(id)arg1;
- (id)frameworkBundle;
- (void)setMyPeerID:(id)arg1;
- (id)myPeerID;
- (id)serviceType;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)setServiceType:(id)arg1;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (void)setSession:(id)arg1;
- (void)start;
- (id)delegate;
- (id)session;
- (void)dealloc;
- (id)description;
- (void)willPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setAlertView:(id)arg1;
- (id)alertView;

@end
