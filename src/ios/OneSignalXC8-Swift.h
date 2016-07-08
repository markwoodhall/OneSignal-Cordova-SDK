// Generated by Apple Swift version 3.0 (swiftlang-800.0.33.1 clang-800.0.31)
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
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import UserNotifications;
#endif

#import <OneSignalXC8/OneSignalXC8.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSDictionary;
@class NSString;

SWIFT_CLASS("_TtC12OneSignalXC89OneSignal")
@interface OneSignal : NSObject
+ (void)initWithLaunchOptions:(NSDictionary * _Nullable)launchOptions appId:(NSString * _Nonnull)appId handleNotification:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary * _Nonnull, BOOL))callback autoRegister:(BOOL)autoRegister;
@end


@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
@end


@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
+ (void)setLogLevel:(ONE_S_LOG_LEVEL)nslogLevel visualLevel:(ONE_S_LOG_LEVEL)visualLogLevel;
+ (void)onesignal_Log:(ONE_S_LOG_LEVEL)logLevel message:(NSString * _Nonnull)message;
@end


@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
@end


@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
+ (void)promptLocation;
@end

@class NSError;

@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
+ (void)postNotification:(NSDictionary * _Nonnull)jsonData;
+ (void)postNotification:(NSDictionary * _Nonnull)jsonData onSuccess:(void (^ _Nullable)(NSDictionary * _Nonnull))successBlock onFailure:(void (^ _Nullable)(NSError * _Nonnull))failureBlock;
@end


@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8)) <UIApplicationDelegate>
@end


@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
+ (void)IdsAvailable:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nullable))idsAvailableBlock;
+ (void)registerForPushNotifications;
@end

@class NSArray;

@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
+ (NSArray * _Nonnull)getSoundFiles;
+ (void)setSubscription:(BOOL)enable;
+ (void)enableInAppAlertNotification:(BOOL)enable;
@end


@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8))
+ (void)sendTags:(NSDictionary * _Nonnull)keyValuePair;
+ (void)sendTags:(NSDictionary * _Nonnull)keyValuePair successBlock:(void (^ _Nullable)(NSDictionary * _Nonnull))successBlock failureBlock:(void (^ _Nullable)(NSError * _Nonnull))failureBlock;
+ (void)sendTag:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
+ (void)sendTag:(NSString * _Nonnull)key value:(NSString * _Nonnull)value successBlock:(void (^ _Nullable)(NSDictionary * _Nonnull))successBlock failureBlock:(void (^ _Nullable)(NSError * _Nonnull))failureBlock;
+ (void)getTags:(void (^ _Nullable)(NSDictionary * _Nonnull))successBlock failureBlock:(void (^ _Nullable)(NSError * _Nonnull))failureBlock;
+ (void)getTags:(void (^ _Nonnull)(NSDictionary * _Nonnull))successBlock;
+ (void)deleteTag:(NSString * _Nonnull)key successBlock:(void (^ _Nonnull)(NSDictionary * _Nonnull))successBlock failureBlock:(void (^ _Nonnull)(NSError * _Nonnull))failureBlock;
+ (void)deleteTag:(NSString * _Nonnull)key;
+ (void)deleteTags:(NSArray * _Nonnull)keys successBlock:(void (^ _Nullable)(NSDictionary * _Nonnull))successBlock failureBlock:(void (^ _Nullable)(NSError * _Nonnull))failureBlock;
+ (void)deleteTags:(NSArray * _Nonnull)keys;
+ (void)setEmail:(NSString * _Nonnull)email;
@end

@class UNUserNotificationCenter;
@class UNNotificationResponse;
@class UNNotification;

@interface OneSignal (SWIFT_EXTENSION(OneSignalXC8)) <UNUserNotificationCenterDelegate>
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response withCompletionHandler:(void (^ _Nonnull)(void))completionHandler;
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center willPresentNotification:(UNNotification * _Nonnull)notification withCompletionHandler:(void (^ _Nonnull)(UNNotificationPresentationOptions))completionHandler;
@end


SWIFT_PROTOCOL("_TtP12OneSignalXC835OneSignalNotificationCenterDelegate_")
@protocol OneSignalNotificationCenterDelegate
@optional
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center willPresentNotification:(UNNotification * _Nonnull)notification withCompletionHandler:(void (^ _Nonnull)(UNNotificationPresentationOptions))completionHandler;
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response withCompletionHandler:(void (^ _Nonnull)(void))completionHandler;
@end


@interface UIApplication (SWIFT_EXTENSION(OneSignalXC8))
+ (void)initialize;
@end

#pragma clang diagnostic pop
