// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Base_Horde_Legendary_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C.OnRep_bHasLanded
// (Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable)

void ASupplyCrate_Base_Horde_Legendary_C::OnRep_bHasLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C.OnRep_bHasLanded");

	ASupplyCrate_Base_Horde_Legendary_C_OnRep_bHasLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C.UserConstructionScript
// ()

void ASupplyCrate_Base_Horde_Legendary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C.UserConstructionScript");

	ASupplyCrate_Base_Horde_Legendary_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C.ExecuteUbergraph_SupplyCrate_Base_Horde_Legendary
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_Legendary_C::ExecuteUbergraph_SupplyCrate_Base_Horde_Legendary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C.ExecuteUbergraph_SupplyCrate_Base_Horde_Legendary");

	ASupplyCrate_Base_Horde_Legendary_C_ExecuteUbergraph_SupplyCrate_Base_Horde_Legendary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
