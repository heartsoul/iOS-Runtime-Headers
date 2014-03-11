/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDInfoGeometry, TSPObject<TSDChangeableInfo>;

@interface TSDInfoGeometryCommand : TSKCommand <TSDCoalesceableInfoPositioningCommmand, TSDPropagatableCommand> {
    BOOL mDidMatchObjectPlaceholderGeometry;
    TSPObject<TSDChangeableInfo> *mInfo;
    TSDInfoGeometry *mNewGeometry;
    TSDInfoGeometry *mOldGeometry;
    BOOL mShouldClearObjectPlaceholderFlag;
}

@property(readonly) TSPObject<TSDChangeableInfo> * info;
@property(readonly) TSDInfoGeometry * newGeometry;

- (id)actionString;
- (void)commit;
- (void)dealloc;
- (id)info;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 context:(id)arg3;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 shouldClearObjectPlaceholderFlag:(BOOL)arg3 context:(id)arg4;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (id)newGeometry;
- (void)p_do;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (BOOL)shouldBeCoalescedWithInsertionCommandOfInfo:(id)arg1;
- (void)undo;

@end