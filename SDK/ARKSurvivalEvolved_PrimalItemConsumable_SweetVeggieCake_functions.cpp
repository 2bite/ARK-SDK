// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_SweetVeggieCake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPCanUse
// ()
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemConsumable_SweetVeggieCake_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPCanUse");

	UPrimalItemConsumable_SweetVeggieCake_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPPreUseItem
// (NetReliable, Native, Event, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void UPrimalItemConsumable_SweetVeggieCake_C::BPPreUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPPreUseItem");

	UPrimalItemConsumable_SweetVeggieCake_C_BPPreUseItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.ExecuteUbergraph_PrimalItemConsumable_SweetVeggieCake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_SweetVeggieCake_C::ExecuteUbergraph_PrimalItemConsumable_SweetVeggieCake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.ExecuteUbergraph_PrimalItemConsumable_SweetVeggieCake");

	UPrimalItemConsumable_SweetVeggieCake_C_ExecuteUbergraph_PrimalItemConsumable_SweetVeggieCake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
