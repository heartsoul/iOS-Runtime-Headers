/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumberFormatter;

@interface MCFormatterVendor : NSObject  {
    NSNumberFormatter *_numberFormatter;
    struct dispatch_queue_s { } *_syncQueue;
}

+ (id)sharedInstance;

- (void)_localeDidChange:(id)arg1;
- (id)numberFormatter;
- (id)init;
- (void)dealloc;

@end