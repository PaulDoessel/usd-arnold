//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#ifndef USDAI_TOKENS_H
#define USDAI_TOKENS_H

/// \file usdAi/tokens.h

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// 
// This is an automatically generated file (by usdGenSchema.py).
// Do not hand-edit!
// 
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "pxr/pxr.h"
#include "pxr/usd/usdAi/api.h"
#include "pxr/base/tf/staticTokens.h"

PXR_NAMESPACE_OPEN_SCOPE

/// \hideinitializer
#define USDAI_TOKENS \
    ((aiAov, "ai:aov")) \
    ((aiAutobump_visibilityCamera, "ai:autobump_visibility:camera")) \
    ((aiAutobump_visibilityDiffuse_reflect, "ai:autobump_visibility:diffuse_reflect")) \
    ((aiAutobump_visibilityDiffuse_transmit, "ai:autobump_visibility:diffuse_transmit")) \
    ((aiAutobump_visibilityShadow, "ai:autobump_visibility:shadow")) \
    ((aiAutobump_visibilitySpecular_reflect, "ai:autobump_visibility:specular_reflect")) \
    ((aiAutobump_visibilitySpecular_transmit, "ai:autobump_visibility:specular_transmit")) \
    ((aiAutobump_visibilitySubsurface, "ai:autobump_visibility:subsurface")) \
    ((aiAutobump_visibilityVolume, "ai:autobump_visibility:volume")) \
    ((aiDisp_autobump, "ai:disp_autobump")) \
    ((aiDisp_height, "ai:disp_height")) \
    ((aiDisp_padding, "ai:disp_padding")) \
    ((aiDisp_zero_value, "ai:disp_zero_value")) \
    ((aiDisplacement, "ai:displacement")) \
    ((aiLight_group, "ai:light_group")) \
    ((aiMatte, "ai:matte")) \
    ((aiOpaque, "ai:opaque")) \
    ((aiRay_bias, "ai:ray_bias")) \
    ((aiReceive_shadows, "ai:receive_shadows")) \
    ((aiSelf_shadows, "ai:self_shadows")) \
    ((aiShadow_group, "ai:shadow_group")) \
    ((aiSidednessCamera, "ai:sidedness:camera")) \
    ((aiSidednessDiffuse_reflect, "ai:sidedness:diffuse_reflect")) \
    ((aiSidednessDiffuse_transmit, "ai:sidedness:diffuse_transmit")) \
    ((aiSidednessShadow, "ai:sidedness:shadow")) \
    ((aiSidednessSpecular_reflect, "ai:sidedness:specular_reflect")) \
    ((aiSidednessSpecular_transmit, "ai:sidedness:specular_transmit")) \
    ((aiSidednessSubsurface, "ai:sidedness:subsurface")) \
    ((aiSidednessVolume, "ai:sidedness:volume")) \
    ((aiSmoothing, "ai:smoothing")) \
    ((aiSubdiv_adaptive_error, "ai:subdiv_adaptive_error")) \
    ((aiSubdiv_adaptive_metric, "ai:subdiv_adaptive_metric")) \
    ((aiSubdiv_adaptive_space, "ai:subdiv_adaptive_space")) \
    ((aiSubdiv_dicing_camera, "ai:subdiv_dicing_camera")) \
    ((aiSubdiv_iterations, "ai:subdiv_iterations")) \
    ((aiSubdiv_smooth_derivs, "ai:subdiv_smooth_derivs")) \
    ((aiSubdiv_type, "ai:subdiv_type")) \
    ((aiSubdiv_uv_smoothing, "ai:subdiv_uv_smoothing")) \
    ((aiSurface, "ai:surface")) \
    ((aiTransform_type, "ai:transform_type")) \
    ((aiUse_light_group, "ai:use_light_group")) \
    ((aiUse_shadow_group, "ai:use_shadow_group")) \
    ((aiVisibilityCamera, "ai:visibility:camera")) \
    ((aiVisibilityDiffuse_reflect, "ai:visibility:diffuse_reflect")) \
    ((aiVisibilityDiffuse_transmit, "ai:visibility:diffuse_transmit")) \
    ((aiVisibilityShadow, "ai:visibility:shadow")) \
    ((aiVisibilitySpecular_reflect, "ai:visibility:specular_reflect")) \
    ((aiVisibilitySpecular_transmit, "ai:visibility:specular_transmit")) \
    ((aiVisibilitySubsurface, "ai:visibility:subsurface")) \
    ((aiVisibilityVolume, "ai:visibility:volume")) \
    ((aRRAY, "ARRAY")) \
    (auto_) \
    ((bOOL, "BOOL")) \
    ((bYTE, "BYTE")) \
    (catclark) \
    (data) \
    (dataType) \
    (driver) \
    (dso) \
    (edge_length) \
    (filter) \
    (flatness) \
    ((fLOAT, "FLOAT")) \
    ((iNT, "INT")) \
    (linear) \
    (loat_at_init) \
    ((mATRIX, "MATRIX")) \
    (name) \
    ((nODE, "NODE")) \
    (none) \
    (object) \
    (pin_borders) \
    (pin_corners) \
    ((pOINT, "POINT")) \
    ((pOINT2, "POINT2")) \
    ((pOINTER, "POINTER")) \
    (raster) \
    ((rGB, "RGB")) \
    ((rGBA, "RGBA")) \
    (rotate_about_center) \
    (rotate_about_origin) \
    (smooth) \
    (step_size) \
    ((uINT, "UINT")) \
    ((userPrefix, "user:")) \
    ((vECTOR, "VECTOR"))

/// \anchor UsdAiTokens
///
/// <b>UsdAiTokens</b> provides static, efficient TfToken's for
/// use in all public USD API
///
/// These tokens are auto-generated from the module's schema, representing
/// property names, for when you need to fetch an attribute or relationship
/// directly by name, e.g. UsdPrim::GetAttribute(), in the most efficient
/// manner, and allow the compiler to verify that you spelled the name
/// correctly.
///
/// UsdAiTokens also contains all of the \em allowedTokens values declared
/// for schema builtin attributes of 'token' scene description type.
/// Use UsdAiTokens like so:
///
/// \code
///     gprim.GetVisibilityAttr().Set(UsdAiTokens->invisible);
/// \endcode
///
/// The tokens are:
/// \li <b>aiAov</b> - UsdAiLightAPI
/// \li <b>aiAutobump_visibilityCamera</b> - UsdAiShapeAPI
/// \li <b>aiAutobump_visibilityDiffuse_reflect</b> - UsdAiShapeAPI
/// \li <b>aiAutobump_visibilityDiffuse_transmit</b> - UsdAiShapeAPI
/// \li <b>aiAutobump_visibilityShadow</b> - UsdAiShapeAPI
/// \li <b>aiAutobump_visibilitySpecular_reflect</b> - UsdAiShapeAPI
/// \li <b>aiAutobump_visibilitySpecular_transmit</b> - UsdAiShapeAPI
/// \li <b>aiAutobump_visibilitySubsurface</b> - UsdAiShapeAPI
/// \li <b>aiAutobump_visibilityVolume</b> - UsdAiShapeAPI
/// \li <b>aiDisp_autobump</b> - UsdAiShapeAPI
/// \li <b>aiDisp_height</b> - UsdAiShapeAPI
/// \li <b>aiDisp_padding</b> - UsdAiShapeAPI
/// \li <b>aiDisp_zero_value</b> - UsdAiShapeAPI
/// \li <b>aiDisplacement</b> - UsdAiMaterialAPI
/// \li <b>aiLight_group</b> - UsdAiShapeAPI
/// \li <b>aiMatte</b> - UsdAiShapeAPI
/// \li <b>aiOpaque</b> - UsdAiShapeAPI
/// \li <b>aiRay_bias</b> - UsdAiShapeAPI
/// \li <b>aiReceive_shadows</b> - UsdAiShapeAPI
/// \li <b>aiSelf_shadows</b> - UsdAiShapeAPI
/// \li <b>aiShadow_group</b> - UsdAiShapeAPI
/// \li <b>aiSidednessCamera</b> - UsdAiShapeAPI
/// \li <b>aiSidednessDiffuse_reflect</b> - UsdAiShapeAPI
/// \li <b>aiSidednessDiffuse_transmit</b> - UsdAiShapeAPI
/// \li <b>aiSidednessShadow</b> - UsdAiShapeAPI
/// \li <b>aiSidednessSpecular_reflect</b> - UsdAiShapeAPI
/// \li <b>aiSidednessSpecular_transmit</b> - UsdAiShapeAPI
/// \li <b>aiSidednessSubsurface</b> - UsdAiShapeAPI
/// \li <b>aiSidednessVolume</b> - UsdAiShapeAPI
/// \li <b>aiSmoothing</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_adaptive_error</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_adaptive_metric</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_adaptive_space</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_dicing_camera</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_iterations</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_smooth_derivs</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_type</b> - UsdAiShapeAPI
/// \li <b>aiSubdiv_uv_smoothing</b> - UsdAiShapeAPI
/// \li <b>aiSurface</b> - UsdAiMaterialAPI
/// \li <b>aiTransform_type</b> - UsdAiShapeAPI
/// \li <b>aiUse_light_group</b> - UsdAiShapeAPI
/// \li <b>aiUse_shadow_group</b> - UsdAiShapeAPI
/// \li <b>aiVisibilityCamera</b> - UsdAiShapeAPI
/// \li <b>aiVisibilityDiffuse_reflect</b> - UsdAiShapeAPI
/// \li <b>aiVisibilityDiffuse_transmit</b> - UsdAiShapeAPI
/// \li <b>aiVisibilityShadow</b> - UsdAiShapeAPI
/// \li <b>aiVisibilitySpecular_reflect</b> - UsdAiShapeAPI
/// \li <b>aiVisibilitySpecular_transmit</b> - UsdAiShapeAPI
/// \li <b>aiVisibilitySubsurface</b> - UsdAiShapeAPI
/// \li <b>aiVisibilityVolume</b> - UsdAiShapeAPI
/// \li <b>aRRAY</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>auto_</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_adaptive_metricAttr(), Default value for UsdAiShapeAPI::GetAiSubdiv_adaptive_metricAttr()
/// \li <b>bOOL</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>bYTE</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>catclark</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_typeAttr()
/// \li <b>data</b> - UsdAiProcedural
/// \li <b>dataType</b> - UsdAiAOV
/// \li <b>driver</b> - UsdAiAOV
/// \li <b>dso</b> - UsdAiProcedural
/// \li <b>edge_length</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_adaptive_metricAttr()
/// \li <b>filter</b> - UsdAiAOV
/// \li <b>flatness</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_adaptive_metricAttr()
/// \li <b>fLOAT</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>iNT</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>linear</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_typeAttr(), Possible value for UsdAiShapeAPI::GetAiTransform_typeAttr(), Possible value for UsdAiShapeAPI::GetAiSubdiv_uv_smoothingAttr()
/// \li <b>loat_at_init</b> - UsdAiProcedural
/// \li <b>mATRIX</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>name</b> - UsdAiAOV
/// \li <b>nODE</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>none</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_typeAttr(), Default value for UsdAiShapeAPI::GetAiSubdiv_typeAttr()
/// \li <b>object</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_adaptive_spaceAttr()
/// \li <b>pin_borders</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_uv_smoothingAttr()
/// \li <b>pin_corners</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_uv_smoothingAttr(), Default value for UsdAiShapeAPI::GetAiSubdiv_uv_smoothingAttr()
/// \li <b>pOINT</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>pOINT2</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>pOINTER</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>raster</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_adaptive_spaceAttr(), Default value for UsdAiShapeAPI::GetAiSubdiv_adaptive_spaceAttr()
/// \li <b>rGB</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>rGBA</b> - Possible value for UsdAiAOV::GetDataTypeAttr(), Default value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>rotate_about_center</b> - Possible value for UsdAiShapeAPI::GetAiTransform_typeAttr(), Default value for UsdAiShapeAPI::GetAiTransform_typeAttr()
/// \li <b>rotate_about_origin</b> - Possible value for UsdAiShapeAPI::GetAiTransform_typeAttr()
/// \li <b>smooth</b> - Possible value for UsdAiShapeAPI::GetAiSubdiv_uv_smoothingAttr()
/// \li <b>step_size</b> - UsdAiVolume
/// \li <b>uINT</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
/// \li <b>userPrefix</b> - The attribute prefix used to qualify user parameters on nodes using the AiNodeAPI.
/// \li <b>vECTOR</b> - Possible value for UsdAiAOV::GetDataTypeAttr()
TF_DECLARE_PUBLIC_TOKENS(UsdAiTokens, USDAI_API, USDAI_TOKENS);

PXR_NAMESPACE_CLOSE_SCOPE

#endif
