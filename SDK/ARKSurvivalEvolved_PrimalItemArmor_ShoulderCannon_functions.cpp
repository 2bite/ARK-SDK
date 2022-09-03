// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ShoulderCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.HasAmmoOrElement
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ShoulderCannon_C::HasAmmoOrElement(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.HasAmmoOrElement");

	UPrimalItemArmor_ShoulderCannon_C_HasAmmoOrElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ConsumeAmmo
// ()
// Parameters:
// int                            amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            UpdatedAmount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ShoulderCannon_C::ConsumeAmmo(int amount, int* UpdatedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ConsumeAmmo");

	UPrimalItemArmor_ShoulderCannon_C_ConsumeAmmo_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedAmount != nullptr)
		*UpdatedAmount = params.UpdatedAmount;
}


// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.GetBuff
// ()

void UPrimalItemArmor_ShoulderCannon_C::GetBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.GetBuff");

	UPrimalItemArmor_ShoulderCannon_C_GetBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.InitBuff
// ()

void UPrimalItemArmor_ShoulderCannon_C::InitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.InitBuff");

	UPrimalItemArmor_ShoulderCannon_C_InitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.BPAddedAttachments
// ()

void UPrimalItemArmor_ShoulderCannon_C::BPAddedAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.BPAddedAttachments");

	UPrimalItemArmor_ShoulderCannon_C_BPAddedAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ExecuteUbergraph_PrimalItemArmor_ShoulderCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ShoulderCannon_C::ExecuteUbergraph_PrimalItemArmor_ShoulderCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ExecuteUbergraph_PrimalItemArmor_ShoulderCannon");

	UPrimalItemArmor_ShoulderCannon_C_ExecuteUbergraph_PrimalItemArmor_ShoulderCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
