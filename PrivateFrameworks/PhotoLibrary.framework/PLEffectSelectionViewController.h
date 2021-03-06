/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLEffectSelectionViewControllerDelegate>, CIFilter, NSArray, NSIndexPath, UICollectionView, UICollectionViewFlowLayout;

@interface PLEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    NSIndexPath *__selectedIndexPath;
    } _cellSize;
    UICollectionView *_collectionView;
    <PLEffectSelectionViewControllerDelegate> *_delegate;
    NSArray *_effects;
    UICollectionViewFlowLayout *_layout;
    } _thumbnailSize;
}

@property <PLEffectSelectionViewControllerDelegate> * delegate;
@property(retain) CIFilter * selectedEffect;

- (void)_generateFilters;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (void)_resetSelectedToOriginal;
- (void)_scrollToSelectedIndexAnimated:(BOOL)arg1;
- (void)_scrollToShowNextFilterNearEdge;
- (id)_selectedIndexPath;
- (void)_setSelectedIndexPath:(id)arg1;
- (id)_textForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)selectedEffect;
- (void)setDelegate:(id)arg1;
- (void)setSelectedEffect:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
