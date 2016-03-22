/*
 * @(#)osapi_utility_impl.h    generated by: makeheader    Mon Dec  3 23:07:47 2007
 *
 *		built from:	utility_impl.ifc
 */

#ifndef osapi_utility_impl_h
#define osapi_utility_impl_h


#ifdef __cplusplus
    extern "C" {
#endif


#define RTIOsapiUtility_max(l, r) (((l) > (r)) ? (l) : (r))
#define RTIOsapiUtility_min(l, r) (((l) < (r)) ? (l) : (r))
#define RTIOsapiUtility_isWithinBound(n, lower, upper) (((n) >= (lower)) \
                                                        && ((n) <= (upper)))


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* osapi_utility_impl_h */