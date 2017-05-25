// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;
@class PDFPageContentView;
@class UITouch;
@class UIEvent;
@class NSBundle;

SWIFT_CLASS("_TtC9UXMPDFKit23PDFAnnotationController")
@interface PDFAnnotationController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)showAnnotations:(PDFPageContentView * _Nonnull)contentView;
- (void)finishAnnotation;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface PDFAnnotationController (SWIFT_EXTENSION(UXMPDFKit))
- (void)render:(NSInteger)page context:(CGContextRef _Nonnull)context bounds:(CGRect)bounds;
@end


SWIFT_CLASS("_TtC9UXMPDFKit18PDFAnnotationStore")
@interface PDFAnnotationStore : NSObject <NSCoding>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
@end

@class UIColor;

SWIFT_CLASS("_TtC9UXMPDFKit12PDFBarButton")
@interface PDFBarButton : UIBarButtonItem
@property (nonatomic, strong) UIColor * _Nullable tintColor;
- (void)toggle:(BOOL)state;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSMutableIndexSet;
@class NSData;

SWIFT_CLASS("_TtC9UXMPDFKit11PDFDocument")
@interface PDFDocument : NSObject <NSCoding>
@property (nonatomic) CGPDFDocumentRef _Nullable documentRef;
/**
  Document Properties
*/
@property (nonatomic, copy) NSString * _Nullable password;
@property (nonatomic, copy) NSDate * _Nullable lastOpen;
@property (nonatomic) NSInteger pageCount;
@property (nonatomic) NSInteger currentPage;
@property (nonatomic, strong) NSMutableIndexSet * _Nonnull bookmarks;
@property (nonatomic, copy) NSURL * _Nullable fileUrl;
@property (nonatomic, strong) NSData * _Nullable fileData;
@property (nonatomic) NSInteger fileSize;
@property (nonatomic, copy) NSString * _Nonnull guid;
/**
  File Properties
*/
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable author;
@property (nonatomic, copy) NSString * _Nullable subject;
@property (nonatomic, copy) NSString * _Nullable keywords;
@property (nonatomic, copy) NSString * _Nullable creator;
@property (nonatomic, copy) NSString * _Nullable producer;
@property (nonatomic, copy) NSDate * _Nullable modificationDate;
@property (nonatomic, copy) NSDate * _Nullable creationDate;
@property (nonatomic) float version;
/**
  Document annotations
*/
@property (nonatomic, strong) PDFAnnotationStore * _Nonnull annotations;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithFilePath:(NSString * _Nonnull)filePath password:(NSString * _Nullable)password error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithFileData:(NSData * _Nonnull)fileData password:(NSString * _Nullable)password error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
+ (NSString * _Nonnull)documentsPath;
+ (NSString * _Nonnull)applicationPath;
+ (NSString * _Nonnull)applicationSupportPath;
- (void)save;
- (void)reloadProperties;
- (CGRect)boundsForPDFPage:(NSInteger)page;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9UXMPDFKit12PDFFormField")
@interface PDFFormField : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)refresh;
@end


SWIFT_CLASS("_TtC9UXMPDFKit18PDFFormButtonField")
@interface PDFFormButtonField : PDFFormField
@property (nonatomic) BOOL noOff;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull exportValue;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9UXMPDFKit11PDFFormPage")
@interface PDFFormPage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9UXMPDFKit15PDFFormPageView")
@interface PDFFormPageView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9UXMPDFKit21PDFFormSignatureField")
@interface PDFFormSignatureField : PDFFormField
@property (nonatomic, copy) NSString * _Nullable name;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface PDFFormSignatureField (SWIFT_EXTENSION(UXMPDFKit))
@end


SWIFT_CLASS("_TtC9UXMPDFKit16PDFFormTextField")
@interface PDFFormTextField : PDFFormField
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)refresh;
@end

@class UITextField;

@interface PDFFormTextField (SWIFT_EXTENSION(UXMPDFKit)) <UITextFieldDelegate>
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
@end

@class UITextView;

@interface PDFFormTextField (SWIFT_EXTENSION(UXMPDFKit)) <UITextViewDelegate, UIScrollViewDelegate>
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (void)textViewDidChange:(UITextView * _Nonnull)textView;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text;
@end


SWIFT_CLASS("_TtC9UXMPDFKit21PDFFormViewController")
@interface PDFFormViewController : NSObject
- (nonnull instancetype)initWithDocument:(PDFDocument * _Nonnull)document OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface PDFFormViewController (SWIFT_EXTENSION(UXMPDFKit))
- (void)render:(NSInteger)page context:(CGContextRef _Nonnull)context bounds:(CGRect)bounds;
@end

@class UITapGestureRecognizer;

SWIFT_CLASS("_TtC9UXMPDFKit18PDFPageContentView")
@interface PDFPageContentView : UIScrollView <UIScrollViewDelegate>
@property (nonatomic) NSInteger page;
@property (nonatomic, copy) void (^ _Nullable viewDidZoom)(CGFloat);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)processSingleTap:(UITapGestureRecognizer * _Nonnull)recognizer;
- (void)zoomIncrement;
- (void)zoomDecrement;
- (void)zoomReset;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9UXMPDFKit15PDFPageScrubber")
@interface PDFPageScrubber : UIToolbar
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)updateScrubber;
- (void)updatePagebarViews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9UXMPDFKit17PDFSinglePageCell")
@interface PDFSinglePageCell : UICollectionViewCell
@property (nonatomic, strong) PDFPageContentView * _Nullable pageContentView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionViewLayout;

SWIFT_CLASS("_TtC9UXMPDFKit19PDFSinglePageViewer")
@interface PDFSinglePageViewer : UICollectionView
@property (nonatomic, strong) PDFDocument * _Nullable document;
- (nonnull instancetype)initWithFrame:(CGRect)frame document:(PDFDocument * _Nonnull)document OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)indexForPage:(NSInteger)page;
- (void)displayPage:(NSInteger)page animated:(BOOL)animated;
- (PDFPageContentView * _Nullable)getPageContent:(NSInteger)page;
- (nonnull instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout * _Nonnull)layout SWIFT_UNAVAILABLE;
@end


@interface PDFSinglePageViewer (SWIFT_EXTENSION(UXMPDFKit)) <UICollectionViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface PDFSinglePageViewer (SWIFT_EXTENSION(UXMPDFKit)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface PDFSinglePageViewer (SWIFT_EXTENSION(UXMPDFKit))
- (void)contentView:(PDFPageContentView * _Nonnull)contentView tapped:(UITapGestureRecognizer * _Nonnull)recognizer;
@end


@interface PDFSinglePageViewer (SWIFT_EXTENSION(UXMPDFKit)) <UICollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface PDFSinglePageViewer (SWIFT_EXTENSION(UXMPDFKit)) <UIScrollViewDelegate>
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC9UXMPDFKit26PDFThumbnailViewController")
@interface PDFThumbnailViewController : UIViewController
- (nonnull instancetype)initWithDocument:(PDFDocument * _Nonnull)document OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface PDFThumbnailViewController (SWIFT_EXTENSION(UXMPDFKit)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface PDFThumbnailViewController (SWIFT_EXTENSION(UXMPDFKit)) <UICollectionViewDelegate, UIScrollViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface PDFThumbnailViewController (SWIFT_EXTENSION(UXMPDFKit)) <UICollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@protocol UIViewControllerTransitionCoordinator;

SWIFT_CLASS("_TtC9UXMPDFKit17PDFViewController")
@interface PDFViewController : UIViewController
/**
  A boolean value that determines whether the navigation bar and scrubber bar hide on screen tap
*/
@property (nonatomic) BOOL hidesBarsOnTap;
/**
  A boolean value that determines if the scrubber bar should be visible
*/
@property (nonatomic) BOOL showsScrubber;
/**
  A boolean value that determines if a PDF should have fillable form elements
*/
@property (nonatomic) BOOL allowsFormFilling;
/**
  A boolean value that determines if annotations are allowed
*/
@property (nonatomic) BOOL allowsAnnotations;
/**
  A boolean value that determines if sharing should be allowed
*/
@property (nonatomic) BOOL allowsSharing;
/**
  A boolean value that determines if view controller is displayed as modal
*/
@property (nonatomic) BOOL isPresentingInModal;
/**
  The scroll direction of the reader
*/
@property (nonatomic) UICollectionViewScrollDirection scrollDirection;
/**
  A closure that defines an action to take upon selecting the share button.
  The default action brings up a UIActivityViewController
*/
@property (nonatomic, copy) void (^ _Nonnull shareBarButtonAction)(void);
/**
  Initializes a new reader with a given document
  <ul>
    <li>
      Parameters:
    </li>
    <li>
      document: The document to display
    </li>
  </ul>

  returns:
  An instance of the PDFViewController
*/
- (nonnull instancetype)initWithDocument:(PDFDocument * _Nonnull)document OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface PDFViewController (SWIFT_EXTENSION(UXMPDFKit))
- (void)thumbnailCollection:(PDFThumbnailViewController * _Nonnull)collection didSelect:(NSInteger)page;
@end


@interface PDFViewController (SWIFT_EXTENSION(UXMPDFKit))
@end


@interface PDFViewController (SWIFT_EXTENSION(UXMPDFKit))
- (void)scrubber:(PDFPageScrubber * _Nonnull)scrubber selectedPage:(NSInteger)selectedPage;
@end


@interface PDFViewController (SWIFT_EXTENSION(UXMPDFKit))
- (void)singlePageViewer:(PDFSinglePageViewer * _Nonnull)collectionView didDisplayPage:(NSInteger)page;
- (void)singlePageViewer:(PDFSinglePageViewer * _Nonnull)collectionView loadedContent:(PDFPageContentView * _Nonnull)content;
- (void)singlePageViewer:(PDFSinglePageViewer * _Nonnull)collectionView tapped:(UITapGestureRecognizer * _Nonnull)recognizer;
- (void)singlePageViewerDidBeginDragging;
- (void)singlePageViewerDidEndDragging;
@end


@interface UIColor (SWIFT_EXTENSION(UXMPDFKit))
@end


@interface UIImage (SWIFT_EXTENSION(UXMPDFKit))
@end


@interface UIViewController (SWIFT_EXTENSION(UXMPDFKit))
@end

#pragma clang diagnostic pop
