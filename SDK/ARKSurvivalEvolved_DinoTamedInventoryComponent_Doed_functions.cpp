// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Doed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Doed.DinoTamedInventoryComponent_Doed_C.BPOverrideItemMinimumUseInterval
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDinoTamedInventoryComponent_Doed_C::BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Doed.DinoTamedInventoryComponent_Doed_C.BPOverrideItemMinimumUseInterval");

	UDinoTamedInventoryComponent_Doed_C_BPOverrideItemMinimumUseInterval_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Doed.DinoTamedInventoryComponent_Doed_C.ExecuteUbergraph_DinoTamedInventoryComponent_Doed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Doed_C::ExecuteUbergraph_DinoTamedInventoryComponent_Doed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Doed.DinoTamedInventoryComponent_Doed_C.ExecuteUbergraph_DinoTamedInventoryComponent_Doed");

	UDinoTamedInventoryComponent_Doed_C_ExecuteUbergraph_DinoTamedInventoryComponent_Doed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
