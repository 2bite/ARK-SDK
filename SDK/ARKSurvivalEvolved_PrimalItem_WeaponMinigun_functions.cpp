// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMinigun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponMinigun.PrimalItem_WeaponMinigun_C.BPTributeItemDownloaded
// (Native, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UObject**                ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMinigun_C::BPTributeItemDownloaded(class UObject** ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMinigun.PrimalItem_WeaponMinigun_C.BPTributeItemDownloaded");

	UPrimalItem_WeaponMinigun_C_BPTributeItemDownloaded_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponMinigun.PrimalItem_WeaponMinigun_C.ExecuteUbergraph_PrimalItem_WeaponMinigun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMinigun_C::ExecuteUbergraph_PrimalItem_WeaponMinigun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMinigun.PrimalItem_WeaponMinigun_C.ExecuteUbergraph_PrimalItem_WeaponMinigun");

	UPrimalItem_WeaponMinigun_C_ExecuteUbergraph_PrimalItem_WeaponMinigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
