// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekGrenadeLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetItemDescription
// (Net, NetReliable, NetRequest, Native, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponTekGrenadeLauncher_C::STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetItemDescription");

	UPrimalItem_WeaponTekGrenadeLauncher_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetCustomInventoryWidgetText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponTekGrenadeLauncher_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetCustomInventoryWidgetText");

	UPrimalItem_WeaponTekGrenadeLauncher_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.ExecuteUbergraph_PrimalItem_WeaponTekGrenadeLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekGrenadeLauncher_C::ExecuteUbergraph_PrimalItem_WeaponTekGrenadeLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.ExecuteUbergraph_PrimalItem_WeaponTekGrenadeLauncher");

	UPrimalItem_WeaponTekGrenadeLauncher_C_ExecuteUbergraph_PrimalItem_WeaponTekGrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
