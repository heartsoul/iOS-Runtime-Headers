/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMAccount;

@interface CKDowngradeMessage : CKIMDBMessage {
}

@property(retain,readonly) IMAccount * account;
@property(readonly) BOOL canBeDowngraded;
@property(readonly) double timeSinceSent;

- (BOOL)canBeDowngraded;
- (double)timeSinceSent;

@end