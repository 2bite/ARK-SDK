// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_WebAnchorPoint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.IsAnchorVisible
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_WebAnchorPoint_C::IsAnchorVisible(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.IsAnchorVisible");

	ABogSpider_WebAnchorPoint_C_IsAnchorVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorRadiusMult
// ()
// Parameters:
// float                          mult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_WebAnchorPoint_C::GetAnchorRadiusMult(float* mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorRadiusMult");

	ABogSpider_WebAnchorPoint_C_GetAnchorRadiusMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mult != nullptr)
		*mult = params.mult;
}


// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorColor
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_WebAnchorPoint_C::GetAnchorColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.GetAnchorColor");

	ABogSpider_WebAnchorPoint_C_GetAnchorColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorRadius
// ()
// Parameters:
// float                          NewRadius                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_WebAnchorPoint_C::SetAnchorRadius(float NewRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorRadius");

	ABogSpider_WebAnchorPoint_C_SetAnchorRadius_Params params;
	params.NewRadius = NewRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorVisibility
// ()
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_WebAnchorPoint_C::SetAnchorVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorVisibility");

	ABogSpider_WebAnchorPoint_C_SetAnchorVisibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorColor
// ()
// Parameters:
// struct FLinearColor            WithColor                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_WebAnchorPoint_C::SetAnchorColor(const struct FLinearColor& WithColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.SetAnchorColor");

	ABogSpider_WebAnchorPoint_C_SetAnchorColor_Params params;
	params.WithColor = WithColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.UserConstructionScript
// ()

void ABogSpider_WebAnchorPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.UserConstructionScript");

	ABogSpider_WebAnchorPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.ExecuteUbergraph_BogSpider_WebAnchorPoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_WebAnchorPoint_C::ExecuteUbergraph_BogSpider_WebAnchorPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C.ExecuteUbergraph_BogSpider_WebAnchorPoint");

	ABogSpider_WebAnchorPoint_C_ExecuteUbergraph_BogSpider_WebAnchorPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
