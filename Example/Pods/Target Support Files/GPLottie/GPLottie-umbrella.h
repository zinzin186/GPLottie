#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LOTCompositionContainer.h"
#import "LOTLayerContainer.h"
#import "LOTMaskContainer.h"
#import "LOTBezierData.h"
#import "LOTKeyframe.h"
#import "CGGeometry+LOTAdditions.h"
#import "LOTBezierPath.h"
#import "LOTHelpers.h"
#import "LOTRadialGradientLayer.h"
#import "UIColor+Expanded.h"
#import "CALayer+Compat.h"
#import "LOTPlatformCompat.h"
#import "NSValue+Compat.h"
#import "UIBezierPath.h"
#import "UIColor.h"
#import "LOTAsset.h"
#import "LOTAssetGroup.h"
#import "LOTLayer.h"
#import "LOTLayerGroup.h"
#import "LOTMask.h"
#import "LOTModels.h"
#import "LOTShapeCircle.h"
#import "LOTShapeFill.h"
#import "LOTShapeGradientFill.h"
#import "LOTShapeGroup.h"
#import "LOTShapePath.h"
#import "LOTShapeRectangle.h"
#import "LOTShapeRepeater.h"
#import "LOTShapeStar.h"
#import "LOTShapeStroke.h"
#import "LOTShapeTransform.h"
#import "LOTShapeTrimPath.h"
#import "LOTAnimationView_Internal.h"
#import "LOTAnimatedControl.h"
#import "LOTAnimatedSwitch.h"
#import "LOTAnimationCache.h"
#import "LOTAnimationTransitionController.h"
#import "LOTAnimationView.h"
#import "LOTAnimationView_Compat.h"
#import "LOTBlockCallback.h"
#import "LOTCacheProvider.h"
#import "LOTComposition.h"
#import "LOTInterpolatorCallback.h"
#import "LOTKeypath.h"
#import "Lottie.h"
#import "LOTValueCallback.h"
#import "LOTValueDelegate.h"
#import "LOTCircleAnimator.h"
#import "LOTPathAnimator.h"
#import "LOTPolygonAnimator.h"
#import "LOTPolystarAnimator.h"
#import "LOTRoundedRectAnimator.h"
#import "LOTArrayInterpolator.h"
#import "LOTColorInterpolator.h"
#import "LOTNumberInterpolator.h"
#import "LOTPathInterpolator.h"
#import "LOTPointInterpolator.h"
#import "LOTSizeInterpolator.h"
#import "LOTTransformInterpolator.h"
#import "LOTValueInterpolator.h"
#import "LOTAnimatorNode.h"
#import "LOTRenderNode.h"
#import "LOTTrimPathNode.h"
#import "LOTFillRenderer.h"
#import "LOTGradientFillRender.h"
#import "LOTRenderGroup.h"
#import "LOTRepeaterRenderer.h"
#import "LOTStrokeRenderer.h"

FOUNDATION_EXPORT double GPLottieVersionNumber;
FOUNDATION_EXPORT const unsigned char GPLottieVersionString[];

