/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
    NSData *mData;
    char *mStart;
    char *mCurrent;
    char *mEnd;
}


- (id)initWithData:(id)arg1 offset:(unsigned long)arg2 length:(unsigned long)arg3;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (id)closeLocalStream;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (void)close;
- (long long)offset;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end