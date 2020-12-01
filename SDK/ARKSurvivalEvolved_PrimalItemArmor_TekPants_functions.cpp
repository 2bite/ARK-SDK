// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.OverrideCrouchingSound
// ()
// Parameters:
// class USoundBase**             InSound                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsProne                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           soundState                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* UPrimalItemArmor_TekPants_C::OverrideCrouchingSound(class USoundBase** InSound, bool* bIsProne, int* soundState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.OverrideCrouchingSound");

	UPrimalItemArmor_TekPants_C_OverrideCrouchingSound_Params params;
	params.InSound = InSound;
	params.bIsProne = bIsProne;
	params.soundState = soundState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.ExecuteUbergraph_PrimalItemArmor_TekPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekPants_C::ExecuteUbergraph_PrimalItemArmor_TekPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.ExecuteUbergraph_PrimalItemArmor_TekPants");

	UPrimalItemArmor_TekPants_C_ExecuteUbergraph_PrimalItemArmor_TekPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
