// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BasePants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.OverrideCrouchingSound
// ()
// Parameters:
// class USoundBase**             InSound                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsProne                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           soundState                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* UPrimalItemArmor_BasePants_C::OverrideCrouchingSound(class USoundBase** InSound, bool* bIsProne, int* soundState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.OverrideCrouchingSound");

	UPrimalItemArmor_BasePants_C_OverrideCrouchingSound_Params params;
	params.InSound = InSound;
	params.bIsProne = bIsProne;
	params.soundState = soundState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.ExecuteUbergraph_PrimalItemArmor_BasePants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BasePants_C::ExecuteUbergraph_PrimalItemArmor_BasePants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.ExecuteUbergraph_PrimalItemArmor_BasePants");

	UPrimalItemArmor_BasePants_C_ExecuteUbergraph_PrimalItemArmor_BasePants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
