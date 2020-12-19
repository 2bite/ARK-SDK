#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_WebAnchorPoint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.IsAnchorVisible
struct ABogSpider_WebAnchorPoint_C_IsAnchorVisible_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorRadiusMult
struct ABogSpider_WebAnchorPoint_C_GetAnchorRadiusMult_Params
{
	float                                              mult;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorColor
struct ABogSpider_WebAnchorPoint_C_GetAnchorColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorRadius
struct ABogSpider_WebAnchorPoint_C_SetAnchorRadius_Params
{
	float                                              NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorVisibility
struct ABogSpider_WebAnchorPoint_C_SetAnchorVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorColor
struct ABogSpider_WebAnchorPoint_C_SetAnchorColor_Params
{
	struct FLinearColor                                WithColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.UserConstructionScript
struct ABogSpider_WebAnchorPoint_C_UserConstructionScript_Params
{
};

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.ExecuteUbergraph_BogSpider_WebAnchorPoint
struct ABogSpider_WebAnchorPoint_C_ExecuteUbergraph_BogSpider_WebAnchorPoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
