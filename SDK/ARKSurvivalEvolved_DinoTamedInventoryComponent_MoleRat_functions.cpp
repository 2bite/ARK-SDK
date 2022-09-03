// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_MoleRat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.BPOverrideItemMinimumUseInterval
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDinoTamedInventoryComponent_MoleRat_C::BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.BPOverrideItemMinimumUseInterval");

	UDinoTamedInventoryComponent_MoleRat_C_BPOverrideItemMinimumUseInterval_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_MoleRat_C::ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat");

	UDinoTamedInventoryComponent_MoleRat_C_ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
