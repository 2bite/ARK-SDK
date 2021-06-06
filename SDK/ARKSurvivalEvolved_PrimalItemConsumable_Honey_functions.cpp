// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Honey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.BPNotifyDropped
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWasThrown                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Honey_C::BPNotifyDropped(class APrimalCharacter** FromCharacter, bool* bWasThrown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.BPNotifyDropped");

	UPrimalItemConsumable_Honey_C_BPNotifyDropped_Params params;
	params.FromCharacter = FromCharacter;
	params.bWasThrown = bWasThrown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.ExecuteUbergraph_PrimalItemConsumable_Honey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Honey_C::ExecuteUbergraph_PrimalItemConsumable_Honey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.ExecuteUbergraph_PrimalItemConsumable_Honey");

	UPrimalItemConsumable_Honey_C_ExecuteUbergraph_PrimalItemConsumable_Honey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
