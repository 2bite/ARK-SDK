// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_ZomWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_ZomWyvern.DinoTamedInventoryComponent_ZomWyvern_C.BPAllowUseInInventory
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsRemoteInventory             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_ZomWyvern_C::BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ZomWyvern.DinoTamedInventoryComponent_ZomWyvern_C.BPAllowUseInInventory");

	UDinoTamedInventoryComponent_ZomWyvern_C_BPAllowUseInInventory_Params params;
	params.theItem = theItem;
	params.bIsRemoteInventory = bIsRemoteInventory;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_ZomWyvern.DinoTamedInventoryComponent_ZomWyvern_C.ExecuteUbergraph_DinoTamedInventoryComponent_ZomWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_ZomWyvern_C::ExecuteUbergraph_DinoTamedInventoryComponent_ZomWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ZomWyvern.DinoTamedInventoryComponent_ZomWyvern_C.ExecuteUbergraph_DinoTamedInventoryComponent_ZomWyvern");

	UDinoTamedInventoryComponent_ZomWyvern_C_ExecuteUbergraph_DinoTamedInventoryComponent_ZomWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
