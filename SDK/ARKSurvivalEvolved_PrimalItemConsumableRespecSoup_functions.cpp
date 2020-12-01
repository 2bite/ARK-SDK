// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableRespecSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPGetCustomInventoryWidgetText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemConsumableRespecSoup_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPGetCustomInventoryWidgetText");

	UPrimalItemConsumableRespecSoup_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.GetLastRespecTime
// ()
// Parameters:
// double                         LastRespecUtcTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableRespecSoup_C::GetLastRespecTime(double* LastRespecUtcTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.GetLastRespecTime");

	UPrimalItemConsumableRespecSoup_C_GetLastRespecTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastRespecUtcTime != nullptr)
		*LastRespecUtcTime = params.LastRespecUtcTime;
}


// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPCanUse
// ()
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemConsumableRespecSoup_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPCanUse");

	UPrimalItemConsumableRespecSoup_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BlueprintUsed
// ()

void UPrimalItemConsumableRespecSoup_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BlueprintUsed");

	UPrimalItemConsumableRespecSoup_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.ExecuteUbergraph_PrimalItemConsumableRespecSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableRespecSoup_C::ExecuteUbergraph_PrimalItemConsumableRespecSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.ExecuteUbergraph_PrimalItemConsumableRespecSoup");

	UPrimalItemConsumableRespecSoup_C_ExecuteUbergraph_PrimalItemConsumableRespecSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
