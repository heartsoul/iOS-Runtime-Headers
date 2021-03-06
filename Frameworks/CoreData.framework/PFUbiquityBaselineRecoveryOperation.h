/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSObject<PFUbiquityBaselineRecoveryOperationDelegate>;

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation {
}

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> * delegate;

- (BOOL)conflictsExistForBaseline:(id)arg1;
- (id)delegate;
- (id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2;
- (BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3;
- (BOOL)hasCurrentBaseline;
- (BOOL)isEqual:(id)arg1;
- (void)main;
- (BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2;
- (BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1;

@end
