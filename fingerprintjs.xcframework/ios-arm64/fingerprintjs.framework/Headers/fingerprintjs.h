#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class FingerprintjsAppContext, FingerprintjsAppTempInstaller, FingerprintjsAppTempInstallerAMAZON_PLAY_STORE, FingerprintjsAppTempInstallerCUSTOM_APP_STORE, FingerprintjsAppTempInstallerGOOGLE_PLAY_STORE, FingerprintjsAppTempInstallerINDUS_PLAY_STORE, FingerprintjsAppTempInstallerOPPO_PLAY_STORE, FingerprintjsAppTempInstallerSAMSUNG_PLAY_STORE, FingerprintjsBlocklists, FingerprintjsBlocklistsCompanion, FingerprintjsBrowserDetails, FingerprintjsBrowserDetailsCompanion, FingerprintjsClientManager, FingerprintjsConfidenceParams, FingerprintjsConfidenceParamsCompanion, FingerprintjsData, FingerprintjsDataCompanion, FingerprintjsFileIntegrityCheck, FingerprintjsFileIntegrityCheckBundleID, FingerprintjsFileIntegrityCheckMobileProvision, FingerprintjsFileManagerUtilityCompanion, FingerprintjsFingerprintConst, FingerprintjsFingerprintPayloadResponseModel, FingerprintjsFingerprintPayloadResponseModelCompanion, FingerprintjsFingerprintRequestModel, FingerprintjsFingerprintRequestModelCompanion, FingerprintjsFingerprintRequestPayloadModel, FingerprintjsFingerprintRequestPayloadModelCompanion, FingerprintjsFingerprintResponseModel, FingerprintjsFingerprintResponseModelCompanion, FingerprintjsFingerprintScope, FingerprintjsHardwareInfoHarvester, FingerprintjsIpData, FingerprintjsIpDataCompanion, FingerprintjsJailbreakHelper, FingerprintjsJsonUtil, FingerprintjsKotlinAbstractCoroutineContextElement, FingerprintjsKotlinAbstractCoroutineContextKey<B, E>, FingerprintjsKotlinArray<T>, FingerprintjsKotlinByteArray, FingerprintjsKotlinByteIterator, FingerprintjsKotlinCancellationException, FingerprintjsKotlinEnum<E>, FingerprintjsKotlinEnumCompanion, FingerprintjsKotlinException, FingerprintjsKotlinIllegalStateException, FingerprintjsKotlinKTypeProjection, FingerprintjsKotlinKTypeProjectionCompanion, FingerprintjsKotlinKVariance, FingerprintjsKotlinNothing, FingerprintjsKotlinPair<__covariant A, __covariant B>, FingerprintjsKotlinRuntimeException, FingerprintjsKotlinThrowable, FingerprintjsKotlinUnit, FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher, FingerprintjsKotlinx_coroutines_coreCoroutineDispatcherKey, FingerprintjsKotlinx_io_coreBuffer, FingerprintjsKotlinx_serialization_coreSerialKind, FingerprintjsKotlinx_serialization_coreSerializersModule, FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode, FingerprintjsKotlinx_serialization_jsonJson, FingerprintjsKotlinx_serialization_jsonJsonConfiguration, FingerprintjsKotlinx_serialization_jsonJsonDefault, FingerprintjsKotlinx_serialization_jsonJsonElement, FingerprintjsKotlinx_serialization_jsonJsonElementCompanion, FingerprintjsKtor_client_coreHttpClient, FingerprintjsKtor_client_coreHttpClientCall, FingerprintjsKtor_client_coreHttpClientCallCompanion, FingerprintjsKtor_client_coreHttpClientConfig<T>, FingerprintjsKtor_client_coreHttpClientEngineConfig, FingerprintjsKtor_client_coreHttpReceivePipeline, FingerprintjsKtor_client_coreHttpReceivePipelinePhases, FingerprintjsKtor_client_coreHttpRequestBuilder, FingerprintjsKtor_client_coreHttpRequestBuilderCompanion, FingerprintjsKtor_client_coreHttpRequestData, FingerprintjsKtor_client_coreHttpRequestPipeline, FingerprintjsKtor_client_coreHttpRequestPipelinePhases, FingerprintjsKtor_client_coreHttpResponse, FingerprintjsKtor_client_coreHttpResponseContainer, FingerprintjsKtor_client_coreHttpResponseData, FingerprintjsKtor_client_coreHttpResponsePipeline, FingerprintjsKtor_client_coreHttpResponsePipelinePhases, FingerprintjsKtor_client_coreHttpSendPipeline, FingerprintjsKtor_client_coreHttpSendPipelinePhases, FingerprintjsKtor_client_coreProxyConfig, FingerprintjsKtor_eventsEventDefinition<T>, FingerprintjsKtor_eventsEvents, FingerprintjsKtor_httpContentType, FingerprintjsKtor_httpContentTypeCompanion, FingerprintjsKtor_httpHeaderValueParam, FingerprintjsKtor_httpHeaderValueWithParameters, FingerprintjsKtor_httpHeaderValueWithParametersCompanion, FingerprintjsKtor_httpHeadersBuilder, FingerprintjsKtor_httpHttpMethod, FingerprintjsKtor_httpHttpMethodCompanion, FingerprintjsKtor_httpHttpProtocolVersion, FingerprintjsKtor_httpHttpProtocolVersionCompanion, FingerprintjsKtor_httpHttpStatusCode, FingerprintjsKtor_httpHttpStatusCodeCompanion, FingerprintjsKtor_httpOutgoingContent, FingerprintjsKtor_httpURLBuilder, FingerprintjsKtor_httpURLBuilderCompanion, FingerprintjsKtor_httpURLProtocol, FingerprintjsKtor_httpURLProtocolCompanion, FingerprintjsKtor_httpUrl, FingerprintjsKtor_httpUrlCompanion, FingerprintjsKtor_utilsAttributeKey<T>, FingerprintjsKtor_utilsGMTDate, FingerprintjsKtor_utilsGMTDateCompanion, FingerprintjsKtor_utilsMonth, FingerprintjsKtor_utilsMonthCompanion, FingerprintjsKtor_utilsPipeline<TSubject, TContext>, FingerprintjsKtor_utilsPipelinePhase, FingerprintjsKtor_utilsStringValuesBuilderImpl, FingerprintjsKtor_utilsTypeInfo, FingerprintjsKtor_utilsWeekDay, FingerprintjsKtor_utilsWeekDayCompanion, FingerprintjsOtherInformation, FingerprintjsOtherInformationCompanion, FingerprintjsScores, FingerprintjsScoresCompanion, FingerprintjsSecurityInfoHarvester, FingerprintjsTagDetails, FingerprintjsTagDetailsCompanion, FingerprintjsThreat, FingerprintjsThreatCompanion, FingerprintjsUserParameters, NSData;

@protocol FingerprintjsExplainable, FingerprintjsKotlinAnnotation, FingerprintjsKotlinAutoCloseable, FingerprintjsKotlinComparable, FingerprintjsKotlinContinuation, FingerprintjsKotlinContinuationInterceptor, FingerprintjsKotlinCoroutineContext, FingerprintjsKotlinCoroutineContextElement, FingerprintjsKotlinCoroutineContextKey, FingerprintjsKotlinFunction, FingerprintjsKotlinIterator, FingerprintjsKotlinKAnnotatedElement, FingerprintjsKotlinKClass, FingerprintjsKotlinKClassifier, FingerprintjsKotlinKDeclarationContainer, FingerprintjsKotlinKType, FingerprintjsKotlinMapEntry, FingerprintjsKotlinSequence, FingerprintjsKotlinSuspendFunction2, FingerprintjsKotlinx_coroutines_coreChildHandle, FingerprintjsKotlinx_coroutines_coreChildJob, FingerprintjsKotlinx_coroutines_coreCoroutineScope, FingerprintjsKotlinx_coroutines_coreDisposableHandle, FingerprintjsKotlinx_coroutines_coreJob, FingerprintjsKotlinx_coroutines_coreParentJob, FingerprintjsKotlinx_coroutines_coreRunnable, FingerprintjsKotlinx_coroutines_coreSelectClause, FingerprintjsKotlinx_coroutines_coreSelectClause0, FingerprintjsKotlinx_coroutines_coreSelectInstance, FingerprintjsKotlinx_io_coreRawSink, FingerprintjsKotlinx_io_coreRawSource, FingerprintjsKotlinx_io_coreSink, FingerprintjsKotlinx_io_coreSource, FingerprintjsKotlinx_serialization_coreCompositeDecoder, FingerprintjsKotlinx_serialization_coreCompositeEncoder, FingerprintjsKotlinx_serialization_coreDecoder, FingerprintjsKotlinx_serialization_coreDeserializationStrategy, FingerprintjsKotlinx_serialization_coreEncoder, FingerprintjsKotlinx_serialization_coreKSerializer, FingerprintjsKotlinx_serialization_coreSerialDescriptor, FingerprintjsKotlinx_serialization_coreSerialFormat, FingerprintjsKotlinx_serialization_coreSerializationStrategy, FingerprintjsKotlinx_serialization_coreSerializersModuleCollector, FingerprintjsKotlinx_serialization_coreStringFormat, FingerprintjsKotlinx_serialization_jsonJsonNamingStrategy, FingerprintjsKtor_client_coreHttpClientEngine, FingerprintjsKtor_client_coreHttpClientEngineCapability, FingerprintjsKtor_client_coreHttpClientPlugin, FingerprintjsKtor_client_coreHttpRequest, FingerprintjsKtor_httpHeaders, FingerprintjsKtor_httpHttpMessage, FingerprintjsKtor_httpHttpMessageBuilder, FingerprintjsKtor_httpParameters, FingerprintjsKtor_httpParametersBuilder, FingerprintjsKtor_ioByteReadChannel, FingerprintjsKtor_ioCloseable, FingerprintjsKtor_utilsAttributes, FingerprintjsKtor_utilsStringValues, FingerprintjsKtor_utilsStringValuesBuilder;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface FingerprintjsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface FingerprintjsBase (FingerprintjsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface FingerprintjsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FingerprintjsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFingerprintjsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface FingerprintjsNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface FingerprintjsByte : FingerprintjsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface FingerprintjsUByte : FingerprintjsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface FingerprintjsShort : FingerprintjsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface FingerprintjsUShort : FingerprintjsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface FingerprintjsInt : FingerprintjsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface FingerprintjsUInt : FingerprintjsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface FingerprintjsLong : FingerprintjsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface FingerprintjsULong : FingerprintjsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface FingerprintjsFloat : FingerprintjsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface FingerprintjsDouble : FingerprintjsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface FingerprintjsBoolean : FingerprintjsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintConst")))
@interface FingerprintjsFingerprintConst : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fingerprintConst __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsFingerprintConst *shared __attribute__((swift_name("shared")));
@property NSString *API_KEY __attribute__((swift_name("API_KEY")));
@property NSString *BASE_URL_FINGERPRINT __attribute__((swift_name("BASE_URL_FINGERPRINT")));
@property (readonly) NSString *BASE_URL_IP_ADDRESS __attribute__((swift_name("BASE_URL_IP_ADDRESS")));
@property NSString *ENCRYPTION_SECRATE_IV __attribute__((swift_name("ENCRYPTION_SECRATE_IV")));
@property NSString *ENCRYPTION_SECRATE_KEY __attribute__((swift_name("ENCRYPTION_SECRATE_KEY")));
@property (readonly) NSString *SDK_VERSION __attribute__((swift_name("SDK_VERSION")));
@property NSArray<FingerprintjsAppTempInstaller *> * _Nullable allowedPlayStoreIdentifier __attribute__((swift_name("allowedPlayStoreIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintScope")))
@interface FingerprintjsFingerprintScope : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fingerprintScope __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsFingerprintScope *shared __attribute__((swift_name("shared")));
@property (readonly) id<FingerprintjsKotlinx_coroutines_coreCoroutineScope> scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonUtil")))
@interface FingerprintjsJsonUtil : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsJsonUtil *shared __attribute__((swift_name("shared")));
- (id _Nullable)fromJsonJsonString:(NSString *)jsonString __attribute__((swift_name("fromJson(jsonString:)")));
@property (readonly) FingerprintjsKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppContext")))
@interface FingerprintjsAppContext : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appContext __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsAppContext *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AesHelper")))
@interface FingerprintjsAesHelper : FingerprintjsBase
- (instancetype)initWithKey:(NSString *)key iv:(NSString *)iv __attribute__((swift_name("init(key:iv:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)decryptEncryptedData:(FingerprintjsKotlinByteArray *)encryptedData __attribute__((swift_name("decrypt(encryptedData:)")));
- (FingerprintjsKotlinByteArray * _Nullable)encryptPlainText:(NSString *)plainText __attribute__((swift_name("encrypt(plainText:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MurmurHash3")))
@interface FingerprintjsMurmurHash3 : FingerprintjsBase
- (instancetype)initWithSeed:(uint32_t)seed __attribute__((swift_name("init(seed:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsKotlinArray<FingerprintjsULong *> *)hash128x64Key:(FingerprintjsKotlinByteArray *)key __attribute__((swift_name("hash128x64(key:)")));
- (FingerprintjsKotlinArray<FingerprintjsUInt *> *)hash128x86Key:(FingerprintjsKotlinByteArray *)key __attribute__((swift_name("hash128x86(key:)")));
- (uint32_t)hash32x86Key:(FingerprintjsKotlinByteArray *)key __attribute__((swift_name("hash32x86(key:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Blocklists")))
@interface FingerprintjsBlocklists : FingerprintjsBase
- (instancetype)initWithProxyScore:(NSString * _Nullable)proxyScore threatScore:(NSString * _Nullable)threatScore trustScore:(NSString * _Nullable)trustScore __attribute__((swift_name("init(proxyScore:threatScore:trustScore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsBlocklistsCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsBlocklists *)doCopyProxyScore:(NSString * _Nullable)proxyScore threatScore:(NSString * _Nullable)threatScore trustScore:(NSString * _Nullable)trustScore __attribute__((swift_name("doCopy(proxyScore:threatScore:trustScore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable proxyScore __attribute__((swift_name("proxyScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="site")
*/
@property (readonly) NSString * _Nullable threatScore __attribute__((swift_name("threatScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable trustScore __attribute__((swift_name("trustScore")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Blocklists.Companion")))
@interface FingerprintjsBlocklistsCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsBlocklistsCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrowserDetails")))
@interface FingerprintjsBrowserDetails : FingerprintjsBase
- (instancetype)initWithSdkVersion:(NSString *)sdkVersion appVersion:(NSString *)appVersion browserName:(NSString *)browserName browserMajorVersion:(NSString *)browserMajorVersion browserFullVersion:(NSString *)browserFullVersion os:(NSString *)os osVersion:(NSString *)osVersion device:(NSString *)device userAgent:(NSString *)userAgent __attribute__((swift_name("init(sdkVersion:appVersion:browserName:browserMajorVersion:browserFullVersion:os:osVersion:device:userAgent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsBrowserDetailsCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsBrowserDetails *)doCopySdkVersion:(NSString *)sdkVersion appVersion:(NSString *)appVersion browserName:(NSString *)browserName browserMajorVersion:(NSString *)browserMajorVersion browserFullVersion:(NSString *)browserFullVersion os:(NSString *)os osVersion:(NSString *)osVersion device:(NSString *)device userAgent:(NSString *)userAgent __attribute__((swift_name("doCopy(sdkVersion:appVersion:browserName:browserMajorVersion:browserFullVersion:os:osVersion:device:userAgent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appVersion")
*/
@property (readonly) NSString *appVersion __attribute__((swift_name("appVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="browserFullVersion")
*/
@property (readonly) NSString *browserFullVersion __attribute__((swift_name("browserFullVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="browserMajorVersion")
*/
@property (readonly) NSString *browserMajorVersion __attribute__((swift_name("browserMajorVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="browserName")
*/
@property (readonly) NSString *browserName __attribute__((swift_name("browserName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device")
*/
@property (readonly) NSString *device __attribute__((swift_name("device")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="os")
*/
@property (readonly) NSString *os __attribute__((swift_name("os")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="osVersion")
*/
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sdkVersion")
*/
@property (readonly) NSString *sdkVersion __attribute__((swift_name("sdkVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userAgent")
*/
@property (readonly) NSString *userAgent __attribute__((swift_name("userAgent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrowserDetails.Companion")))
@interface FingerprintjsBrowserDetailsCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsBrowserDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfidenceParams")))
@interface FingerprintjsConfidenceParams : FingerprintjsBase
- (instancetype)initWithIsEmulatorDetect:(BOOL)isEmulatorDetect isRooted:(BOOL)isRooted isTampered:(BOOL)isTampered isScreenReading:(BOOL)isScreenReading isDeveloperModeEnabled:(BOOL)isDeveloperModeEnabled __attribute__((swift_name("init(isEmulatorDetect:isRooted:isTampered:isScreenReading:isDeveloperModeEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsConfidenceParamsCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsConfidenceParams *)doCopyIsEmulatorDetect:(BOOL)isEmulatorDetect isRooted:(BOOL)isRooted isTampered:(BOOL)isTampered isScreenReading:(BOOL)isScreenReading isDeveloperModeEnabled:(BOOL)isDeveloperModeEnabled __attribute__((swift_name("doCopy(isEmulatorDetect:isRooted:isTampered:isScreenReading:isDeveloperModeEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isDeveloperModeEnabled")
*/
@property (readonly) BOOL isDeveloperModeEnabled __attribute__((swift_name("isDeveloperModeEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isEmulatorDetect")
*/
@property (readonly) BOOL isEmulatorDetect __attribute__((swift_name("isEmulatorDetect")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isRooted")
*/
@property (readonly) BOOL isRooted __attribute__((swift_name("isRooted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isScreenReading")
*/
@property (readonly) BOOL isScreenReading __attribute__((swift_name("isScreenReading")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isTampered")
*/
@property (readonly) BOOL isTampered __attribute__((swift_name("isTampered")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfidenceParams.Companion")))
@interface FingerprintjsConfidenceParamsCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsConfidenceParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data")))
@interface FingerprintjsData : FingerprintjsBase
- (instancetype)initWithIpData:(FingerprintjsIpData * _Nullable)ipData requestId:(NSString * _Nullable)requestId visitorId:(NSString * _Nullable)visitorId firstSeen:(NSString * _Nullable)firstSeen lastSeen:(NSString * _Nullable)lastSeen confidenceScore:(FingerprintjsDouble * _Nullable)confidenceScore __attribute__((swift_name("init(ipData:requestId:visitorId:firstSeen:lastSeen:confidenceScore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsDataCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsData *)doCopyIpData:(FingerprintjsIpData * _Nullable)ipData requestId:(NSString * _Nullable)requestId visitorId:(NSString * _Nullable)visitorId firstSeen:(NSString * _Nullable)firstSeen lastSeen:(NSString * _Nullable)lastSeen confidenceScore:(FingerprintjsDouble * _Nullable)confidenceScore __attribute__((swift_name("doCopy(ipData:requestId:visitorId:firstSeen:lastSeen:confidenceScore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="confidenceScore")
*/
@property (readonly) FingerprintjsDouble * _Nullable confidenceScore __attribute__((swift_name("confidenceScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstSeen")
*/
@property (readonly) NSString * _Nullable firstSeen __attribute__((swift_name("firstSeen")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ipData")
*/
@property (readonly) FingerprintjsIpData * _Nullable ipData __attribute__((swift_name("ipData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lastSeen")
*/
@property (readonly) NSString * _Nullable lastSeen __attribute__((swift_name("lastSeen")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitorId")
*/
@property (readonly) NSString * _Nullable visitorId __attribute__((swift_name("visitorId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data.Companion")))
@interface FingerprintjsDataCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintPayloadResponseModel")))
@interface FingerprintjsFingerprintPayloadResponseModel : FingerprintjsBase
- (instancetype)initWithResponse:(NSString * _Nullable)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsFingerprintPayloadResponseModelCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsFingerprintPayloadResponseModel *)doCopyResponse:(NSString * _Nullable)response __attribute__((swift_name("doCopy(response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="response")
*/
@property (readonly) NSString * _Nullable response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintPayloadResponseModel.Companion")))
@interface FingerprintjsFingerprintPayloadResponseModelCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsFingerprintPayloadResponseModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintRequestModel")))
@interface FingerprintjsFingerprintRequestModel : FingerprintjsBase
- (instancetype)initWithHashCode:(NSString *)hashCode hashValue:(NSString *)hashValue otherInformation:(FingerprintjsOtherInformation *)otherInformation __attribute__((swift_name("init(hashCode:hashValue:otherInformation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsFingerprintRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsFingerprintRequestModel *)doCopyHashCode:(NSString *)hashCode hashValue:(NSString *)hashValue otherInformation:(FingerprintjsOtherInformation *)otherInformation __attribute__((swift_name("doCopy(hashCode:hashValue:otherInformation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hashCode")
*/
@property (readonly) NSString *hashCode __attribute__((swift_name("hashCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hashValue")
*/
@property (readonly) NSString *hashValue __attribute__((swift_name("hashValue")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="otherInformation")
*/
@property (readonly) FingerprintjsOtherInformation *otherInformation __attribute__((swift_name("otherInformation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintRequestModel.Companion")))
@interface FingerprintjsFingerprintRequestModelCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsFingerprintRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintRequestPayloadModel")))
@interface FingerprintjsFingerprintRequestPayloadModel : FingerprintjsBase
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsFingerprintRequestPayloadModelCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsFingerprintRequestPayloadModel *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payload")
*/
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintRequestPayloadModel.Companion")))
@interface FingerprintjsFingerprintRequestPayloadModelCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsFingerprintRequestPayloadModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResponseModel")))
@interface FingerprintjsFingerprintResponseModel : FingerprintjsBase
- (instancetype)initWithData:(FingerprintjsData * _Nullable)data message:(NSString * _Nullable)message status:(FingerprintjsInt * _Nullable)status __attribute__((swift_name("init(data:message:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsFingerprintResponseModelCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsFingerprintResponseModel *)doCopyData:(FingerprintjsData * _Nullable)data message:(NSString * _Nullable)message status:(FingerprintjsInt * _Nullable)status __attribute__((swift_name("doCopy(data:message:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) FingerprintjsData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) FingerprintjsInt * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResponseModel.Companion")))
@interface FingerprintjsFingerprintResponseModelCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsFingerprintResponseModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IpData")))
@interface FingerprintjsIpData : FingerprintjsBase
- (instancetype)initWithIp:(NSString * _Nullable)ip city:(NSString * _Nullable)city region:(NSString * _Nullable)region countryName:(NSString * _Nullable)countryName flag:(NSString * _Nullable)flag latitude:(FingerprintjsDouble * _Nullable)latitude longitude:(FingerprintjsDouble * _Nullable)longitude threat:(FingerprintjsThreat * _Nullable)threat __attribute__((swift_name("init(ip:city:region:countryName:flag:latitude:longitude:threat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsIpDataCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsIpData *)doCopyIp:(NSString * _Nullable)ip city:(NSString * _Nullable)city region:(NSString * _Nullable)region countryName:(NSString * _Nullable)countryName flag:(NSString * _Nullable)flag latitude:(FingerprintjsDouble * _Nullable)latitude longitude:(FingerprintjsDouble * _Nullable)longitude threat:(FingerprintjsThreat * _Nullable)threat __attribute__((swift_name("doCopy(ip:city:region:countryName:flag:latitude:longitude:threat:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="city")
*/
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="country_name")
*/
@property (readonly) NSString * _Nullable countryName __attribute__((swift_name("countryName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flag")
*/
@property (readonly) NSString * _Nullable flag __attribute__((swift_name("flag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ip")
*/
@property (readonly) NSString * _Nullable ip __attribute__((swift_name("ip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="latitude")
*/
@property (readonly) FingerprintjsDouble * _Nullable latitude __attribute__((swift_name("latitude")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="longitude")
*/
@property (readonly) FingerprintjsDouble * _Nullable longitude __attribute__((swift_name("longitude")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="region")
*/
@property (readonly) NSString * _Nullable region __attribute__((swift_name("region")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="threat")
*/
@property (readonly) FingerprintjsThreat * _Nullable threat __attribute__((swift_name("threat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IpData.Companion")))
@interface FingerprintjsIpDataCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsIpDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtherInformation")))
@interface FingerprintjsOtherInformation : FingerprintjsBase
- (instancetype)initWithIp:(NSString *)ip requestTimeStamp:(NSString *)requestTimeStamp confidenceParams:(FingerprintjsConfidenceParams *)confidenceParams browserDetails:(FingerprintjsBrowserDetails *)browserDetails tag:(FingerprintjsTagDetails *)tag __attribute__((swift_name("init(ip:requestTimeStamp:confidenceParams:browserDetails:tag:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsOtherInformationCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsOtherInformation *)doCopyIp:(NSString *)ip requestTimeStamp:(NSString *)requestTimeStamp confidenceParams:(FingerprintjsConfidenceParams *)confidenceParams browserDetails:(FingerprintjsBrowserDetails *)browserDetails tag:(FingerprintjsTagDetails *)tag __attribute__((swift_name("doCopy(ip:requestTimeStamp:confidenceParams:browserDetails:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="browserDetails")
*/
@property (readonly) FingerprintjsBrowserDetails *browserDetails __attribute__((swift_name("browserDetails")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="confidenceParams")
*/
@property (readonly) FingerprintjsConfidenceParams *confidenceParams __attribute__((swift_name("confidenceParams")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ip")
*/
@property (readonly) NSString *ip __attribute__((swift_name("ip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestTimeStamp")
*/
@property (readonly) NSString *requestTimeStamp __attribute__((swift_name("requestTimeStamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tag")
*/
@property (readonly) FingerprintjsTagDetails *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtherInformation.Companion")))
@interface FingerprintjsOtherInformationCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsOtherInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Scores")))
@interface FingerprintjsScores : FingerprintjsBase
- (instancetype)initWithProxyScore:(FingerprintjsInt * _Nullable)proxyScore threatScore:(FingerprintjsInt * _Nullable)threatScore trustScore:(FingerprintjsInt * _Nullable)trustScore vpnScore:(FingerprintjsInt * _Nullable)vpnScore __attribute__((swift_name("init(proxyScore:threatScore:trustScore:vpnScore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsScoresCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsScores *)doCopyProxyScore:(FingerprintjsInt * _Nullable)proxyScore threatScore:(FingerprintjsInt * _Nullable)threatScore trustScore:(FingerprintjsInt * _Nullable)trustScore vpnScore:(FingerprintjsInt * _Nullable)vpnScore __attribute__((swift_name("doCopy(proxyScore:threatScore:trustScore:vpnScore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="proxy_score")
*/
@property (readonly) FingerprintjsInt * _Nullable proxyScore __attribute__((swift_name("proxyScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="threat_score")
*/
@property (readonly) FingerprintjsInt * _Nullable threatScore __attribute__((swift_name("threatScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="trust_score")
*/
@property (readonly) FingerprintjsInt * _Nullable trustScore __attribute__((swift_name("trustScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vpn_score")
*/
@property (readonly) FingerprintjsInt * _Nullable vpnScore __attribute__((swift_name("vpnScore")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Scores.Companion")))
@interface FingerprintjsScoresCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsScoresCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagDetails")))
@interface FingerprintjsTagDetails : FingerprintjsBase
- (instancetype)initWithAppVersionName:(NSString *)appVersionName deviceManufacturer:(NSString *)deviceManufacturer deviceModelName:(NSString *)deviceModelName deviceModelType:(NSString *)deviceModelType deviceOsType:(NSString *)deviceOsType deviceOsVersion:(NSString *)deviceOsVersion deviceRegion:(NSString *)deviceRegion __attribute__((swift_name("init(appVersionName:deviceManufacturer:deviceModelName:deviceModelType:deviceOsType:deviceOsVersion:deviceRegion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsTagDetailsCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsTagDetails *)doCopyAppVersionName:(NSString *)appVersionName deviceManufacturer:(NSString *)deviceManufacturer deviceModelName:(NSString *)deviceModelName deviceModelType:(NSString *)deviceModelType deviceOsType:(NSString *)deviceOsType deviceOsVersion:(NSString *)deviceOsVersion deviceRegion:(NSString *)deviceRegion __attribute__((swift_name("doCopy(appVersionName:deviceManufacturer:deviceModelName:deviceModelType:deviceOsType:deviceOsVersion:deviceRegion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="app_version_name")
*/
@property (readonly) NSString *appVersionName __attribute__((swift_name("appVersionName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device-manufacturer")
*/
@property (readonly) NSString *deviceManufacturer __attribute__((swift_name("deviceManufacturer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device-model-name")
*/
@property (readonly) NSString *deviceModelName __attribute__((swift_name("deviceModelName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device-model-type")
*/
@property (readonly) NSString *deviceModelType __attribute__((swift_name("deviceModelType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device-os-type")
*/
@property (readonly) NSString *deviceOsType __attribute__((swift_name("deviceOsType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device-os-version")
*/
@property (readonly) NSString *deviceOsVersion __attribute__((swift_name("deviceOsVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device-region")
*/
@property (readonly) NSString *deviceRegion __attribute__((swift_name("deviceRegion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagDetails.Companion")))
@interface FingerprintjsTagDetailsCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsTagDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Threat")))
@interface FingerprintjsThreat : FingerprintjsBase
- (instancetype)initWithBlocklists:(NSArray<FingerprintjsBlocklists *> * _Nullable)blocklists isAnonymous:(FingerprintjsBoolean * _Nullable)isAnonymous isBogon:(FingerprintjsBoolean * _Nullable)isBogon isDatacenter:(FingerprintjsBoolean * _Nullable)isDatacenter isIcloudRelay:(FingerprintjsBoolean * _Nullable)isIcloudRelay isKnownAbuser:(FingerprintjsBoolean * _Nullable)isKnownAbuser isKnownAttacker:(FingerprintjsBoolean * _Nullable)isKnownAttacker isProxy:(FingerprintjsBoolean * _Nullable)isProxy isThreat:(FingerprintjsBoolean * _Nullable)isThreat isTor:(FingerprintjsBoolean * _Nullable)isTor isVpn:(FingerprintjsBoolean * _Nullable)isVpn scores:(FingerprintjsScores * _Nullable)scores __attribute__((swift_name("init(blocklists:isAnonymous:isBogon:isDatacenter:isIcloudRelay:isKnownAbuser:isKnownAttacker:isProxy:isThreat:isTor:isVpn:scores:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsThreatCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsThreat *)doCopyBlocklists:(NSArray<FingerprintjsBlocklists *> * _Nullable)blocklists isAnonymous:(FingerprintjsBoolean * _Nullable)isAnonymous isBogon:(FingerprintjsBoolean * _Nullable)isBogon isDatacenter:(FingerprintjsBoolean * _Nullable)isDatacenter isIcloudRelay:(FingerprintjsBoolean * _Nullable)isIcloudRelay isKnownAbuser:(FingerprintjsBoolean * _Nullable)isKnownAbuser isKnownAttacker:(FingerprintjsBoolean * _Nullable)isKnownAttacker isProxy:(FingerprintjsBoolean * _Nullable)isProxy isThreat:(FingerprintjsBoolean * _Nullable)isThreat isTor:(FingerprintjsBoolean * _Nullable)isTor isVpn:(FingerprintjsBoolean * _Nullable)isVpn scores:(FingerprintjsScores * _Nullable)scores __attribute__((swift_name("doCopy(blocklists:isAnonymous:isBogon:isDatacenter:isIcloudRelay:isKnownAbuser:isKnownAttacker:isProxy:isThreat:isTor:isVpn:scores:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blocklists")
*/
@property (readonly) NSArray<FingerprintjsBlocklists *> * _Nullable blocklists __attribute__((swift_name("blocklists")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_anonymous")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isAnonymous __attribute__((swift_name("isAnonymous")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_bogon")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isBogon __attribute__((swift_name("isBogon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_datacenter")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isDatacenter __attribute__((swift_name("isDatacenter")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_icloud_relay")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isIcloudRelay __attribute__((swift_name("isIcloudRelay")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_known_abuser")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isKnownAbuser __attribute__((swift_name("isKnownAbuser")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_known_attacker")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isKnownAttacker __attribute__((swift_name("isKnownAttacker")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_proxy")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isProxy __attribute__((swift_name("isProxy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_threat")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isThreat __attribute__((swift_name("isThreat")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_tor")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isTor __attribute__((swift_name("isTor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vpn")
*/
@property (readonly) FingerprintjsBoolean * _Nullable isVpn __attribute__((swift_name("isVpn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scores")
*/
@property (readonly) FingerprintjsScores * _Nullable scores __attribute__((swift_name("scores")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Threat.Companion")))
@interface FingerprintjsThreatCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsThreatCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientManager")))
@interface FingerprintjsClientManager : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)clientManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsClientManager *shared __attribute__((swift_name("shared")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUrl:(NSString *)url completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(url:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrl:(NSString *)url queryParams:(NSDictionary<NSString *, NSString *> *)queryParams completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(url:queryParams:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUrl:(NSString *)url body:(id)body headers:(NSDictionary<NSString *, NSString *> *)headers completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(url:body:headers:completionHandler:)")));
@property (readonly) FingerprintjsKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiskSpaceInfo")))
@interface FingerprintjsDiskSpaceInfo : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getTotalSpace __attribute__((swift_name("getTotalSpace()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileManagerUtility")))
@interface FingerprintjsFileManagerUtility : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FingerprintjsFileManagerUtilityCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileManagerUtility.Companion")))
@interface FingerprintjsFileManagerUtilityCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsFileManagerUtilityCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)convertBytesBytes:(int64_t)bytes useGB:(BOOL)useGB __attribute__((swift_name("convertBytes(bytes:useGB:)")));
- (FingerprintjsLong * _Nullable)getFileSizeForKey:(NSString *)forKey __attribute__((swift_name("getFileSize(forKey:)")));
- (FingerprintjsLong * _Nullable)getTotalDiskSpace __attribute__((swift_name("getTotalDiskSpace()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HardwareInfoHarvester")))
@interface FingerprintjsHardwareInfoHarvester : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hardwareInfoHarvester __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsHardwareInfoHarvester *shared __attribute__((swift_name("shared")));
- (NSString *)getDeviceModel __attribute__((swift_name("getDeviceModel()")));
@property NSString *iosAppId __attribute__((swift_name("iosAppId")));
@property NSString *iosAppVersion __attribute__((swift_name("iosAppVersion")));
@property int32_t iosCameraCount __attribute__((swift_name("iosCameraCount")));
@property NSString *iosCpuCount __attribute__((swift_name("iosCpuCount")));
@property NSString *iosDeviceId __attribute__((swift_name("iosDeviceId")));
@property NSString *iosDeviceTimeZoneIdentifier __attribute__((swift_name("iosDeviceTimeZoneIdentifier")));
@property FingerprintjsKotlinPair<FingerprintjsFloat *, FingerprintjsFloat *> *iosDisplayResolution __attribute__((swift_name("iosDisplayResolution")));
@property NSString *iosGlesVersion __attribute__((swift_name("iosGlesVersion")));
@property NSString *iosManufacturerName __attribute__((swift_name("iosManufacturerName")));
@property NSString *iosModalName __attribute__((swift_name("iosModalName")));
@property NSArray<NSString *> *iosSensorsList __attribute__((swift_name("iosSensorsList")));
@property NSString *iosTotalDiskSpace __attribute__((swift_name("iosTotalDiskSpace")));
@property NSString *iosTotalRam __attribute__((swift_name("iosTotalRam")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSensorsChecker")))
@interface FingerprintjsIOSSensorsChecker : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)cameraCount __attribute__((swift_name("cameraCount()")));
- (void)cleanup __attribute__((swift_name("cleanup()")));
- (NSArray<NSString *> *)getAvailableSensors __attribute__((swift_name("getAvailableSensors()")));
- (NSString *)getGLESVersion __attribute__((swift_name("getGLESVersion()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeychainIdentifierStorage")))
@interface FingerprintjsKeychainIdentifierStorage : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)existsObjectForKey:(NSString *)forKey __attribute__((swift_name("existsObject(forKey:)")));
- (BOOL)setKey:(NSString *)key stringValue:(NSString *)stringValue __attribute__((swift_name("set(key:stringValue:)")));
- (NSString * _Nullable)stringForKey:(NSString *)forKey __attribute__((swift_name("string(forKey:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JailbreakHelper")))
@interface FingerprintjsJailbreakHelper : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jailbreakHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsJailbreakHelper *shared __attribute__((swift_name("shared")));
- (BOOL)isDeviceCompromised __attribute__((swift_name("isDeviceCompromised()")));
- (BOOL)isJailBroken __attribute__((swift_name("isJailBroken()")));
- (BOOL)isSimulator __attribute__((swift_name("isSimulator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SecurityInfoHarvester")))
@interface FingerprintjsSecurityInfoHarvester : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)securityInfoHarvester __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsSecurityInfoHarvester *shared __attribute__((swift_name("shared")));
@property BOOL isAppTampered __attribute__((swift_name("isAppTampered")));
@property BOOL isDeveloperModeEnable __attribute__((swift_name("isDeveloperModeEnable")));
@property BOOL isDeviceJailBroken __attribute__((swift_name("isDeviceJailBroken")));
@property BOOL isDeviceScreenMirroringEnable __attribute__((swift_name("isDeviceScreenMirroringEnable")));
@property BOOL isDeviceScreenReaderEnable __attribute__((swift_name("isDeviceScreenReaderEnable")));
@property BOOL isDeviceSimulator __attribute__((swift_name("isDeviceSimulator")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AntiPhishing")))
@interface FingerprintjsAntiPhishing : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)amIReverseEngineered __attribute__((swift_name("amIReverseEngineered()")));
- (BOOL)amITamperedChecks:(NSArray<FingerprintjsFileIntegrityCheck *> *)checks __attribute__((swift_name("amITampered(checks:)")));
- (FingerprintjsKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end

__attribute__((swift_name("Explainable")))
@protocol FingerprintjsExplainable
@required
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((swift_name("FileIntegrityCheck")))
@interface FingerprintjsFileIntegrityCheck : FingerprintjsBase <FingerprintjsExplainable>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileIntegrityCheck.BundleID")))
@interface FingerprintjsFileIntegrityCheckBundleID : FingerprintjsFileIntegrityCheck
- (instancetype)initWithExpectedBundleID:(NSString *)expectedBundleID __attribute__((swift_name("init(expectedBundleID:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsFileIntegrityCheckBundleID *)doCopyExpectedBundleID:(NSString *)expectedBundleID __attribute__((swift_name("doCopy(expectedBundleID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *expectedBundleID __attribute__((swift_name("expectedBundleID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileIntegrityCheck.MobileProvision")))
@interface FingerprintjsFileIntegrityCheckMobileProvision : FingerprintjsFileIntegrityCheck
- (instancetype)initWithExpectedSha256Value:(NSString *)expectedSha256Value __attribute__((swift_name("init(expectedSha256Value:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsFileIntegrityCheckMobileProvision *)doCopyExpectedSha256Value:(NSString *)expectedSha256Value __attribute__((swift_name("doCopy(expectedSha256Value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *expectedSha256Value __attribute__((swift_name("expectedSha256Value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserParameters")))
@interface FingerprintjsUserParameters : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userParameters __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsUserParameters *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ipAddressWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ipAddress(completionHandler:)")));
- (NSString *)userHash __attribute__((swift_name("userHash()")));
- (NSString *)userHashValue __attribute__((swift_name("userHashValue()")));
@end

__attribute__((swift_name("AppTempInstaller")))
@interface FingerprintjsAppTempInstaller : FingerprintjsBase
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppTempInstaller.AMAZON_PLAY_STORE")))
@interface FingerprintjsAppTempInstallerAMAZON_PLAY_STORE : FingerprintjsAppTempInstaller
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aMAZON_PLAY_STORE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsAppTempInstallerAMAZON_PLAY_STORE *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppTempInstaller.CUSTOM_APP_STORE")))
@interface FingerprintjsAppTempInstallerCUSTOM_APP_STORE : FingerprintjsAppTempInstaller
- (instancetype)initWithCustomId:(NSString *)customId __attribute__((swift_name("init(customId:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsAppTempInstallerCUSTOM_APP_STORE *)doCopyCustomId:(NSString *)customId __attribute__((swift_name("doCopy(customId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *customId __attribute__((swift_name("customId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppTempInstaller.GOOGLE_PLAY_STORE")))
@interface FingerprintjsAppTempInstallerGOOGLE_PLAY_STORE : FingerprintjsAppTempInstaller
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gOOGLE_PLAY_STORE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsAppTempInstallerGOOGLE_PLAY_STORE *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppTempInstaller.INDUS_PLAY_STORE")))
@interface FingerprintjsAppTempInstallerINDUS_PLAY_STORE : FingerprintjsAppTempInstaller
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNDUS_PLAY_STORE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsAppTempInstallerINDUS_PLAY_STORE *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppTempInstaller.OPPO_PLAY_STORE")))
@interface FingerprintjsAppTempInstallerOPPO_PLAY_STORE : FingerprintjsAppTempInstaller
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPPO_PLAY_STORE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsAppTempInstallerOPPO_PLAY_STORE *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppTempInstaller.SAMSUNG_PLAY_STORE")))
@interface FingerprintjsAppTempInstallerSAMSUNG_PLAY_STORE : FingerprintjsAppTempInstaller
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sAMSUNG_PLAY_STORE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsAppTempInstallerSAMSUNG_PLAY_STORE *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface FingerprintjsFileManagerUtilityCompanion (Extensions)
- (NSString *)formatSizeBytes:(int64_t)bytes useGB:(BOOL)useGB __attribute__((swift_name("formatSize(bytes:useGB:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerJsConfigKt")))
@interface FingerprintjsFingerJsConfigKt : FingerprintjsBase
+ (void)fingerprintConfigurationApiBaseUrl:(NSString *)apiBaseUrl apiKey:(NSString *)apiKey region:(NSString *)region aesKey:(NSString *)aesKey aesIv:(NSString *)aesIv onSuccess:(void (^)(FingerprintjsFingerprintResponseModel *))onSuccess onError:(void (^)(NSString *))onError __attribute__((swift_name("fingerprintConfiguration(apiBaseUrl:apiKey:region:aesKey:aesIv:onSuccess:onError:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol FingerprintjsKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<FingerprintjsKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol FingerprintjsKotlinx_serialization_coreSerialFormat
@required
@property (readonly) FingerprintjsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol FingerprintjsKotlinx_serialization_coreStringFormat <FingerprintjsKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface FingerprintjsKotlinx_serialization_jsonJson : FingerprintjsBase <FingerprintjsKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) FingerprintjsKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(FingerprintjsKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (FingerprintjsKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (FingerprintjsKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) FingerprintjsKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) FingerprintjsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface FingerprintjsKotlinByteArray : FingerprintjsBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(FingerprintjsByte *(^)(FingerprintjsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (FingerprintjsKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FingerprintjsKotlinArray<T> : FingerprintjsBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FingerprintjsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FingerprintjsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol FingerprintjsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<FingerprintjsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FingerprintjsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol FingerprintjsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<FingerprintjsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<FingerprintjsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol FingerprintjsKotlinx_serialization_coreKSerializer <FingerprintjsKotlinx_serialization_coreSerializationStrategy, FingerprintjsKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinThrowable")))
@interface FingerprintjsKotlinThrowable : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (FingerprintjsKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FingerprintjsKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface FingerprintjsKotlinException : FingerprintjsKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface FingerprintjsKotlinRuntimeException : FingerprintjsKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface FingerprintjsKotlinIllegalStateException : FingerprintjsKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface FingerprintjsKotlinCancellationException : FingerprintjsKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol FingerprintjsKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface FingerprintjsKtor_client_coreHttpClient : FingerprintjsBase <FingerprintjsKotlinx_coroutines_coreCoroutineScope, FingerprintjsKtor_ioCloseable>
- (instancetype)initWithEngine:(id<FingerprintjsKtor_client_coreHttpClientEngine>)engine userConfig:(FingerprintjsKtor_client_coreHttpClientConfig<FingerprintjsKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (FingerprintjsKtor_client_coreHttpClient *)configBlock:(void (^)(FingerprintjsKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<FingerprintjsKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FingerprintjsKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<FingerprintjsKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<FingerprintjsKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) FingerprintjsKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) FingerprintjsKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) FingerprintjsKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) FingerprintjsKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) FingerprintjsKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) FingerprintjsKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface FingerprintjsKotlinPair<__covariant A, __covariant B> : FingerprintjsBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol FingerprintjsKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<FingerprintjsKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<FingerprintjsKotlinCoroutineContextElement> _Nullable)getKey:(id<FingerprintjsKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<FingerprintjsKotlinCoroutineContext>)minusKeyKey:(id<FingerprintjsKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<FingerprintjsKotlinCoroutineContext>)plusContext:(id<FingerprintjsKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface FingerprintjsKotlinx_serialization_coreSerializersModule : FingerprintjsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<FingerprintjsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FingerprintjsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<FingerprintjsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<FingerprintjsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FingerprintjsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FingerprintjsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FingerprintjsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface FingerprintjsKotlinx_serialization_jsonJsonDefault : FingerprintjsKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface FingerprintjsKotlinx_serialization_jsonJsonElement : FingerprintjsBase
@property (class, readonly, getter=companion) FingerprintjsKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface FingerprintjsKotlinx_serialization_jsonJsonConfiguration : FingerprintjsBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<FingerprintjsKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol FingerprintjsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface FingerprintjsKotlinByteIterator : FingerprintjsBase <FingerprintjsKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FingerprintjsByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol FingerprintjsKotlinx_serialization_coreEncoder
@required
- (id<FingerprintjsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<FingerprintjsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<FingerprintjsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) FingerprintjsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol FingerprintjsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<FingerprintjsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<FingerprintjsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) FingerprintjsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol FingerprintjsKotlinx_serialization_coreDecoder
@required
- (id<FingerprintjsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<FingerprintjsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (FingerprintjsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) FingerprintjsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol FingerprintjsKtor_client_coreHttpClientEngine <FingerprintjsKotlinx_coroutines_coreCoroutineScope, FingerprintjsKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(FingerprintjsKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(FingerprintjsKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(FingerprintjsKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) FingerprintjsKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<FingerprintjsKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface FingerprintjsKtor_client_coreHttpClientEngineConfig : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property FingerprintjsKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface FingerprintjsKtor_client_coreHttpClientConfig<T> : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FingerprintjsKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(FingerprintjsKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<FingerprintjsKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(FingerprintjsKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(FingerprintjsKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol FingerprintjsKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol FingerprintjsKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(FingerprintjsKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<FingerprintjsKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface FingerprintjsKtor_eventsEvents : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(FingerprintjsKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<FingerprintjsKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(FingerprintjsKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(FingerprintjsKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface FingerprintjsKtor_utilsPipeline<TSubject, TContext> : FingerprintjsBase
- (instancetype)initWithPhases:(FingerprintjsKotlinArray<FingerprintjsKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(FingerprintjsKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FingerprintjsKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(FingerprintjsKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(FingerprintjsKtor_utilsPipelinePhase *)reference phase:(FingerprintjsKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(FingerprintjsKtor_utilsPipelinePhase *)reference phase:(FingerprintjsKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(FingerprintjsKtor_utilsPipelinePhase *)phase block:(id<FingerprintjsKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<FingerprintjsKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(FingerprintjsKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(FingerprintjsKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(FingerprintjsKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(FingerprintjsKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FingerprintjsKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<FingerprintjsKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface FingerprintjsKtor_client_coreHttpReceivePipeline : FingerprintjsKtor_utilsPipeline<FingerprintjsKtor_client_coreHttpResponse *, FingerprintjsKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FingerprintjsKotlinArray<FingerprintjsKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FingerprintjsKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FingerprintjsKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface FingerprintjsKtor_client_coreHttpRequestPipeline : FingerprintjsKtor_utilsPipeline<id, FingerprintjsKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FingerprintjsKotlinArray<FingerprintjsKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FingerprintjsKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FingerprintjsKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface FingerprintjsKtor_client_coreHttpResponsePipeline : FingerprintjsKtor_utilsPipeline<FingerprintjsKtor_client_coreHttpResponseContainer *, FingerprintjsKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FingerprintjsKotlinArray<FingerprintjsKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FingerprintjsKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FingerprintjsKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface FingerprintjsKtor_client_coreHttpSendPipeline : FingerprintjsKtor_utilsPipeline<id, FingerprintjsKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FingerprintjsKotlinArray<FingerprintjsKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FingerprintjsKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FingerprintjsKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol FingerprintjsKotlinCoroutineContextElement <FingerprintjsKotlinCoroutineContext>
@required
@property (readonly) id<FingerprintjsKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol FingerprintjsKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol FingerprintjsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<FingerprintjsKotlinKClass>)kClass provider:(id<FingerprintjsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<FingerprintjsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<FingerprintjsKotlinKClass>)kClass serializer:(id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<FingerprintjsKotlinKClass>)baseClass actualClass:(id<FingerprintjsKotlinKClass>)actualClass actualSerializer:(id<FingerprintjsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<FingerprintjsKotlinKClass>)baseClass defaultDeserializerProvider:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<FingerprintjsKotlinKClass>)baseClass defaultDeserializerProvider:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<FingerprintjsKotlinKClass>)baseClass defaultSerializerProvider:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol FingerprintjsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol FingerprintjsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol FingerprintjsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol FingerprintjsKotlinKClass <FingerprintjsKotlinKDeclarationContainer, FingerprintjsKotlinKAnnotatedElement, FingerprintjsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface FingerprintjsKotlinx_serialization_jsonJsonElementCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol FingerprintjsKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface FingerprintjsKotlinEnum<E> : FingerprintjsBase <FingerprintjsKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode : FingerprintjsKotlinEnum<FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (FingerprintjsKotlinArray<FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FingerprintjsKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol FingerprintjsKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol FingerprintjsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<FingerprintjsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FingerprintjsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) FingerprintjsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol FingerprintjsKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface FingerprintjsKotlinx_serialization_coreSerialKind : FingerprintjsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol FingerprintjsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<FingerprintjsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FingerprintjsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<FingerprintjsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) FingerprintjsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface FingerprintjsKotlinNothing : FingerprintjsBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface FingerprintjsKtor_client_coreHttpRequestData : FingerprintjsBase
- (instancetype)initWithUrl:(FingerprintjsKtor_httpUrl *)url method:(FingerprintjsKtor_httpHttpMethod *)method headers:(id<FingerprintjsKtor_httpHeaders>)headers body:(FingerprintjsKtor_httpOutgoingContent *)body executionContext:(id<FingerprintjsKotlinx_coroutines_coreJob>)executionContext attributes:(id<FingerprintjsKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<FingerprintjsKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FingerprintjsKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FingerprintjsKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<FingerprintjsKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<FingerprintjsKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FingerprintjsKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface FingerprintjsKtor_client_coreHttpResponseData : FingerprintjsBase
- (instancetype)initWithStatusCode:(FingerprintjsKtor_httpHttpStatusCode *)statusCode requestTime:(FingerprintjsKtor_utilsGMTDate *)requestTime headers:(id<FingerprintjsKtor_httpHeaders>)headers version:(FingerprintjsKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<FingerprintjsKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<FingerprintjsKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<FingerprintjsKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FingerprintjsKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) FingerprintjsKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) FingerprintjsKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface FingerprintjsKotlinAbstractCoroutineContextElement : FingerprintjsBase <FingerprintjsKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<FingerprintjsKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<FingerprintjsKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol FingerprintjsKotlinContinuationInterceptor <FingerprintjsKotlinCoroutineContextElement>
@required
- (id<FingerprintjsKotlinContinuation>)interceptContinuationContinuation:(id<FingerprintjsKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<FingerprintjsKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher : FingerprintjsKotlinAbstractCoroutineContextElement <FingerprintjsKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<FingerprintjsKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<FingerprintjsKotlinCoroutineContext>)context block:(id<FingerprintjsKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<FingerprintjsKotlinCoroutineContext>)context block:(id<FingerprintjsKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<FingerprintjsKotlinContinuation>)interceptContinuationContinuation:(id<FingerprintjsKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<FingerprintjsKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<FingerprintjsKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface FingerprintjsKtor_client_coreProxyConfig : FingerprintjsBase
- (instancetype)initWithUrl:(FingerprintjsKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FingerprintjsKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol FingerprintjsKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(FingerprintjsKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) FingerprintjsKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface FingerprintjsKtor_utilsAttributeKey<T> : FingerprintjsBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(FingerprintjsKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(FingerprintjsKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface FingerprintjsKtor_eventsEventDefinition<T> : FingerprintjsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol FingerprintjsKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface FingerprintjsKtor_utilsPipelinePhase : FingerprintjsBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol FingerprintjsKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol FingerprintjsKotlinSuspendFunction2 <FingerprintjsKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface FingerprintjsKtor_client_coreHttpReceivePipelinePhases : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol FingerprintjsKtor_httpHttpMessage
@required
@property (readonly) id<FingerprintjsKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface FingerprintjsKtor_client_coreHttpResponse : FingerprintjsBase <FingerprintjsKtor_httpHttpMessage, FingerprintjsKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FingerprintjsKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<FingerprintjsKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) FingerprintjsKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) FingerprintjsKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) FingerprintjsKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface FingerprintjsKotlinUnit : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface FingerprintjsKtor_client_coreHttpRequestPipelinePhases : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol FingerprintjsKtor_httpHttpMessageBuilder
@required
@property (readonly) FingerprintjsKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface FingerprintjsKtor_client_coreHttpRequestBuilder : FingerprintjsBase <FingerprintjsKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FingerprintjsKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<FingerprintjsKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<FingerprintjsKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<FingerprintjsKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (FingerprintjsKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(FingerprintjsKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (FingerprintjsKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(FingerprintjsKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(FingerprintjsKtor_httpURLBuilder *, FingerprintjsKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<FingerprintjsKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property FingerprintjsKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<FingerprintjsKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) FingerprintjsKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property FingerprintjsKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FingerprintjsKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface FingerprintjsKtor_client_coreHttpResponsePipelinePhases : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface FingerprintjsKtor_client_coreHttpResponseContainer : FingerprintjsBase
- (instancetype)initWithExpectedType:(FingerprintjsKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(FingerprintjsKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FingerprintjsKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface FingerprintjsKtor_client_coreHttpClientCall : FingerprintjsBase <FingerprintjsKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(FingerprintjsKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(FingerprintjsKtor_client_coreHttpClient *)client requestData:(FingerprintjsKtor_client_coreHttpRequestData *)requestData responseData:(FingerprintjsKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(FingerprintjsKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(FingerprintjsKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<FingerprintjsKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<FingerprintjsKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FingerprintjsKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<FingerprintjsKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<FingerprintjsKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property FingerprintjsKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface FingerprintjsKtor_client_coreHttpSendPipelinePhases : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) FingerprintjsKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface FingerprintjsKotlinEnumCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface FingerprintjsKtor_httpUrl : FingerprintjsBase
@property (class, readonly, getter=companion) FingerprintjsKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<FingerprintjsKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) FingerprintjsKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) FingerprintjsKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface FingerprintjsKtor_httpHttpMethod : FingerprintjsBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol FingerprintjsKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FingerprintjsKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol FingerprintjsKtor_httpHeaders <FingerprintjsKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface FingerprintjsKtor_httpOutgoingContent : FingerprintjsBase
- (id _Nullable)getPropertyKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(FingerprintjsKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<FingerprintjsKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) FingerprintjsLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) FingerprintjsKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<FingerprintjsKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol FingerprintjsKotlinx_coroutines_coreJob <FingerprintjsKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<FingerprintjsKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<FingerprintjsKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(FingerprintjsKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (FingerprintjsKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<FingerprintjsKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(FingerprintjsKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<FingerprintjsKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(FingerprintjsKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<FingerprintjsKotlinx_coroutines_coreJob>)plusOther_:(id<FingerprintjsKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<FingerprintjsKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<FingerprintjsKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<FingerprintjsKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface FingerprintjsKtor_httpHttpStatusCode : FingerprintjsBase <FingerprintjsKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(FingerprintjsKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (FingerprintjsKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (FingerprintjsKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface FingerprintjsKtor_utilsGMTDate : FingerprintjsBase <FingerprintjsKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(FingerprintjsKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(FingerprintjsKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(FingerprintjsKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (FingerprintjsKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (FingerprintjsKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(FingerprintjsKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(FingerprintjsKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) FingerprintjsKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) FingerprintjsKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface FingerprintjsKtor_httpHttpProtocolVersion : FingerprintjsBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol FingerprintjsKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<FingerprintjsKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface FingerprintjsKotlinAbstractCoroutineContextKey<B, E> : FingerprintjsBase <FingerprintjsKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<FingerprintjsKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<FingerprintjsKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface FingerprintjsKotlinx_coroutines_coreCoroutineDispatcherKey : FingerprintjsKotlinAbstractCoroutineContextKey<id<FingerprintjsKotlinContinuationInterceptor>, FingerprintjsKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<FingerprintjsKotlinCoroutineContextKey>)baseKey safeCast:(id<FingerprintjsKotlinCoroutineContextElement> _Nullable (^)(id<FingerprintjsKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol FingerprintjsKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface FingerprintjsKtor_utilsTypeInfo : FingerprintjsBase
- (instancetype)initWithType:(id<FingerprintjsKotlinKClass>)type kotlinType:(id<FingerprintjsKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<FingerprintjsKotlinKClass>)type reifiedType:(id<FingerprintjsKotlinKType>)reifiedType kotlinType:(id<FingerprintjsKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FingerprintjsKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<FingerprintjsKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol FingerprintjsKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(FingerprintjsBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(FingerprintjsKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) FingerprintjsKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<FingerprintjsKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol FingerprintjsKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<FingerprintjsKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<FingerprintjsKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<FingerprintjsKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FingerprintjsKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface FingerprintjsKtor_utilsStringValuesBuilderImpl : FingerprintjsBase <FingerprintjsKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<FingerprintjsKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<FingerprintjsKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<FingerprintjsKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FingerprintjsKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) FingerprintjsMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface FingerprintjsKtor_httpHeadersBuilder : FingerprintjsKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<FingerprintjsKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface FingerprintjsKtor_client_coreHttpRequestBuilderCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface FingerprintjsKtor_httpURLBuilder : FingerprintjsBase
- (instancetype)initWithProtocol:(FingerprintjsKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<FingerprintjsKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<FingerprintjsKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<FingerprintjsKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property FingerprintjsKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property FingerprintjsKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface FingerprintjsKtor_client_coreHttpClientCallCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol FingerprintjsKtor_client_coreHttpRequest <FingerprintjsKtor_httpHttpMessage, FingerprintjsKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<FingerprintjsKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FingerprintjsKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) FingerprintjsKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FingerprintjsKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface FingerprintjsKtor_httpUrlCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol FingerprintjsKtor_httpParameters <FingerprintjsKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface FingerprintjsKtor_httpURLProtocol : FingerprintjsBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface FingerprintjsKtor_httpHttpMethodCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (FingerprintjsKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<FingerprintjsKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) FingerprintjsKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol FingerprintjsKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface FingerprintjsKtor_httpHeaderValueWithParameters : FingerprintjsBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<FingerprintjsKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<FingerprintjsKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface FingerprintjsKtor_httpContentType : FingerprintjsKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<FingerprintjsKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<FingerprintjsKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(FingerprintjsKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (FingerprintjsKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (FingerprintjsKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol FingerprintjsKotlinx_coroutines_coreChildHandle <FingerprintjsKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(FingerprintjsKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<FingerprintjsKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol FingerprintjsKotlinx_coroutines_coreChildJob <FingerprintjsKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<FingerprintjsKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol FingerprintjsKotlinSequence
@required
- (id<FingerprintjsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol FingerprintjsKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) FingerprintjsKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<FingerprintjsKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(FingerprintjsKotlinThrowable *, id _Nullable, id<FingerprintjsKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<FingerprintjsKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol FingerprintjsKotlinx_coroutines_coreSelectClause0 <FingerprintjsKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface FingerprintjsKtor_httpHttpStatusCodeCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (FingerprintjsKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) FingerprintjsKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<FingerprintjsKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface FingerprintjsKtor_utilsWeekDay : FingerprintjsKotlinEnum<FingerprintjsKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FingerprintjsKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) FingerprintjsKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) FingerprintjsKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) FingerprintjsKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) FingerprintjsKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) FingerprintjsKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) FingerprintjsKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (FingerprintjsKotlinArray<FingerprintjsKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FingerprintjsKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface FingerprintjsKtor_utilsMonth : FingerprintjsKotlinEnum<FingerprintjsKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FingerprintjsKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) FingerprintjsKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (FingerprintjsKotlinArray<FingerprintjsKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FingerprintjsKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface FingerprintjsKtor_utilsGMTDateCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<FingerprintjsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) FingerprintjsKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface FingerprintjsKtor_httpHttpProtocolVersionCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (FingerprintjsKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (FingerprintjsKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) FingerprintjsKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) FingerprintjsKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) FingerprintjsKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) FingerprintjsKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) FingerprintjsKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol FingerprintjsKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<FingerprintjsKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<FingerprintjsKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol FingerprintjsKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol FingerprintjsKotlinx_io_coreRawSource <FingerprintjsKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(FingerprintjsKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol FingerprintjsKotlinx_io_coreSource <FingerprintjsKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<FingerprintjsKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(FingerprintjsKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<FingerprintjsKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<FingerprintjsKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FingerprintjsKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface FingerprintjsKtor_httpURLBuilderCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol FingerprintjsKtor_httpParametersBuilder <FingerprintjsKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface FingerprintjsKtor_httpURLProtocolCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (FingerprintjsKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) FingerprintjsKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) FingerprintjsKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) FingerprintjsKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) FingerprintjsKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) FingerprintjsKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, FingerprintjsKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface FingerprintjsKtor_httpHeaderValueParam : FingerprintjsBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (FingerprintjsKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface FingerprintjsKtor_httpHeaderValueWithParametersCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<FingerprintjsKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface FingerprintjsKtor_httpContentTypeCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (FingerprintjsKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) FingerprintjsKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol FingerprintjsKotlinx_coroutines_coreParentJob <FingerprintjsKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (FingerprintjsKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol FingerprintjsKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<FingerprintjsKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<FingerprintjsKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface FingerprintjsKtor_utilsWeekDayCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (FingerprintjsKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (FingerprintjsKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface FingerprintjsKtor_utilsMonthCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (FingerprintjsKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (FingerprintjsKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface FingerprintjsKotlinKTypeProjection : FingerprintjsBase
- (instancetype)initWithVariance:(FingerprintjsKotlinKVariance * _Nullable)variance type:(id<FingerprintjsKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FingerprintjsKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (FingerprintjsKotlinKTypeProjection *)doCopyVariance:(FingerprintjsKotlinKVariance * _Nullable)variance type:(id<FingerprintjsKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FingerprintjsKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) FingerprintjsKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol FingerprintjsKotlinx_io_coreRawSink <FingerprintjsKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(FingerprintjsKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol FingerprintjsKotlinx_io_coreSink <FingerprintjsKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<FingerprintjsKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<FingerprintjsKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(FingerprintjsKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FingerprintjsKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface FingerprintjsKotlinx_io_coreBuffer : FingerprintjsBase <FingerprintjsKotlinx_io_coreSource, FingerprintjsKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (FingerprintjsKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(FingerprintjsKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<FingerprintjsKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(FingerprintjsKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(FingerprintjsKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<FingerprintjsKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<FingerprintjsKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<FingerprintjsKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(FingerprintjsKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<FingerprintjsKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(FingerprintjsKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FingerprintjsKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface FingerprintjsKotlinKVariance : FingerprintjsKotlinEnum<FingerprintjsKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FingerprintjsKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) FingerprintjsKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) FingerprintjsKotlinKVariance *out __attribute__((swift_name("out")));
+ (FingerprintjsKotlinArray<FingerprintjsKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FingerprintjsKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface FingerprintjsKotlinKTypeProjectionCompanion : FingerprintjsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FingerprintjsKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FingerprintjsKotlinKTypeProjection *)contravariantType:(id<FingerprintjsKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FingerprintjsKotlinKTypeProjection *)covariantType:(id<FingerprintjsKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FingerprintjsKotlinKTypeProjection *)invariantType:(id<FingerprintjsKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) FingerprintjsKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
