/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPRemoteInterfaceOpenParentRequest : NSObject {
    id /* block */ _reply;
    NSData *_userInfoData;
    BOOL _waitingForReply;
}

@property (nonatomic, copy) id /* block */ reply;
@property (nonatomic, copy) NSData *userInfoData;
@property (nonatomic) BOOL waitingForReply;

- (void).cxx_destruct;
- (id /* block */)reply;
- (void)setReply:(id /* block */)arg1;
- (void)setUserInfoData:(id)arg1;
- (void)setWaitingForReply:(BOOL)arg1;
- (id)userInfoData;
- (BOOL)waitingForReply;

@end