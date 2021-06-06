// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BogSpider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.BPOverrideItemMinimumUseInterval
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDinoTamedInventoryComponent_BogSpider_C::BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.BPOverrideItemMinimumUseInterval");

	UDinoTamedInventoryComponent_BogSpider_C_BPOverrideItemMinimumUseInterval_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_BogSpider_C::ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider");

	UDinoTamedInventoryComponent_BogSpider_C_ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
