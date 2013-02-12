/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <OCCancelDelegate>, ESDContainer, ESDObject, ESDRoot, NSMutableArray, NSMutableDictionary, OADTheme, PBOfficeArtReaderState, PBOutlineBulletDictionary, PBSlideState, PDPresentation, PDSlideBase, SFUNoCopyDictionary;

@interface PBPresentationReaderState : NSObject {
    struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; boolx4; char *x5; unsigned int x6; struct __sFILE {} *x7; struct SsrwOORootStorage { 
            struct _Storage {} *m_pStorage; 
            unsigned short m_pBuffer[36]; 
            struct _RootStorage {} *m_pRootStorage; 
        } x8; struct SsrwOOStorage {} *x9; struct SsrwOOStorage {} *x10; struct SsrwOOStream {} *x11; struct SsrwOOStream {} *x12; int x13; boolx14; struct PptEshReader {} *x15; struct PptEshReader {} *x16; struct PptParserVisitor {} *x17; struct PptPersistDir {} *x18; struct EshHeader {} *x19; struct EshObject {} *x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; struct ChMap<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int> > { 
            struct map<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { 
                struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { 
                    struct _Rb_tree_impl<CsLess<long unsigned int>,false> { 
                        struct CsLess<long unsigned int> { } _M_key_compare; 
                        struct _Rb_tree_node_base { 
                            int _M_color; 
                            struct _Rb_tree_node_base {} *_M_parent; 
                            struct _Rb_tree_node_base {} *_M_left; 
                            struct _Rb_tree_node_base {} *_M_right; 
                        } _M_header; 
                        unsigned int _M_node_count; 
                    } _M_impl; 
                } _M_t; 
            } m_map; 
        } x27; struct PptObjectFactory {} *x28; struct EshMark {} *x29; int x30; struct ChVector<ChPair<long unsigned int, EscherObjectEnums> > { 
            struct ChPair<long unsigned int,EscherObjectEnums> {} *m_vector; 
            struct ChPair<long unsigned int,EscherObjectEnums> {} *m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    unsigned int mBulletIndex;
    <OCCancelDelegate> *mCancel;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mCurrentSlideTextBlockStartIndexVector;
    OADTheme *mDefaultTheme;
    ESDRoot *mDocumentRoot;
    NSMutableArray *mFontEntities;
    BOOL mHasCharacterPropertyBulletIndex;
    BOOL mHasSlideNumberPlaceholder;
    struct __CFDictionary { } *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
        } x31; } *mPptBinaryReader;
    NSMutableArray *mSlideIndexes;
    SFUNoCopyDictionary *mSlideMasterToMasterStyles;
    PBSlideState *mSlideState;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcCurrentMasterStyleInfoVector;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcDocMasterStyleInfoVector;
    unsigned int mSrcSlideId;
    ESDContainer *mSrcSlideListHolder;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
    unsigned int mTextLength;
    PDPresentation *mTgtPresentation;
    PDSlideBase *mTgtSlide;
}

@property(retain) <OCCancelDelegate> * cancelDelegate;
@property BOOL hasSlideNumberPlaceholder;
@property ESDContainer * sourceSlideListHolder;

- (struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; boolx4; char *x5; unsigned int x6; struct __sFILE {} *x7; struct SsrwOORootStorage { struct _Storage {} *x_8_1_1; unsigned short x_8_1_2[36]; struct _RootStorage {} *x_8_1_3; } x8; struct SsrwOOStorage {} *x9; struct SsrwOOStorage {} *x10; struct SsrwOOStream {} *x11; struct SsrwOOStream {} *x12; int x13; boolx14; struct PptEshReader {} *x15; struct PptEshReader {} *x16; struct PptParserVisitor {} *x17; struct PptPersistDir {} *x18; struct EshHeader {} *x19; struct EshObject {} *x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; struct ChMap<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int> > { struct map<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_27_1_1; } x27; struct PptObjectFactory {} *x28; struct EshMark {} *x29; int x30; struct ChVector<ChPair<long unsigned int, EscherObjectEnums> > { struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_1; struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_2; unsigned int x_31_1_3; unsigned int x_31_1_4; unsigned int x_31_1_5; } x31; }*)reader;
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (void)addSlideIndex:(int)arg1;
- (id)baseTextListStyle;
- (unsigned int)bulletIndex;
- (id)cancelDelegate;
- (id)currentBulletStyle;
- (id)currentMacCharStyle;
- (struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)currentSlideTextBlockStartIndexVector;
- (struct PBReaderMasterStyleInfo { struct PptTxMasterStyleAtom {} *x1; struct PptMasterBulletStyleAtom {} *x2; }*)currentSourceMasterStyleInfoOfType:(int)arg1;
- (void)dealloc;
- (id)defaultTheme;
- (struct PBReaderMasterStyleInfo { struct PptTxMasterStyleAtom {} *x1; struct PptMasterBulletStyleAtom {} *x2; }*)docSourceMasterStyleInfoOfType:(int)arg1;
- (id)documentRoot;
- (id)fontEntityAtIndex:(unsigned int)arg1;
- (unsigned int)fontEntityCount;
- (int)getSlideIndexAt:(int)arg1;
- (BOOL)hasCharacterPropertyBulletIndex;
- (BOOL)hasCurrentSourceMasterStyleInfoVector;
- (BOOL)hasSlideNumberPlaceholder;
- (id)hyperlinkInfoWithId:(unsigned long)arg1 createIfAbsent:(BOOL)arg2;
- (id)initWithReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; boolx4; char *x5; unsigned int x6; struct __sFILE {} *x7; struct SsrwOORootStorage { struct _Storage {} *x_8_1_1; unsigned short x_8_1_2[36]; struct _RootStorage {} *x_8_1_3; } x8; struct SsrwOOStorage {} *x9; struct SsrwOOStorage {} *x10; struct SsrwOOStream {} *x11; struct SsrwOOStream {} *x12; int x13; boolx14; struct PptEshReader {} *x15; struct PptEshReader {} *x16; struct PptParserVisitor {} *x17; struct PptPersistDir {} *x18; struct EshHeader {} *x19; struct EshObject {} *x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; struct ChMap<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int> > { struct map<long unsigned int,PptBinaryReader::SKIP_CONDITIONS,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_27_1_1; } x27; struct PptObjectFactory {} *x28; struct EshMark {} *x29; int x30; struct ChVector<ChPair<long unsigned int, EscherObjectEnums> > { struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_1; struct ChPair<long unsigned int,EscherObjectEnums> {} *x_31_1_2; unsigned int x_31_1_3; unsigned int x_31_1_4; unsigned int x_31_1_5; } x31; }*)arg1 tgtPresentation:(id)arg2;
- (BOOL)isCancelled;
- (id)masterStyles:(id)arg1;
- (int)numberOfSlideIndexes;
- (id)officeArtState;
- (void)resetSlideState;
- (void)setBulletIndex:(unsigned int)arg1;
- (void)setCancelDelegate:(id)arg1;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setCurrentSourceMasterStyleInfoVector:(struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned long)arg2;
- (void)setDefaultTheme:(id)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)arg1;
- (void)setHasSlideNumberPlaceholder:(BOOL)arg1;
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setSourceSlideId:(unsigned long)arg1;
- (void)setSourceSlideListHolder:(id)arg1;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (void)setTextLength:(unsigned int)arg1;
- (void)setTgtSlide:(id)arg1;
- (id)slideIndexesRef;
- (id)slideState;
- (id)sourceSlideListHolder;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (unsigned int)textLength;
- (id)tgtPresentation;
- (id)tgtSlide;

@end