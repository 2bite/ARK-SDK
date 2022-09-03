// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CarriedCharacterGivingLifeToDesmodus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CarriedCharacterGivingLifeToDesmodus.Buff_CarriedCharacterGivingLifeToDesmodus_C.UserConstructionScript
// ()

void ABuff_CarriedCharacterGivingLifeToDesmodus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedCharacterGivingLifeToDesmodus.Buff_CarriedCharacterGivingLifeToDesmodus_C.UserConstructionScript");

	ABuff_CarriedCharacterGivingLifeToDesmodus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedCharacterGivingLifeToDesmodus.Buff_CarriedCharacterGivingLifeToDesmodus_C.ExecuteUbergraph_Buff_CarriedCharacterGivingLifeToDesmodus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedCharacterGivingLifeToDesmodus_C::ExecuteUbergraph_Buff_CarriedCharacterGivingLifeToDesmodus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedCharacterGivingLifeToDesmodus.Buff_CarriedCharacterGivingLifeToDesmodus_C.ExecuteUbergraph_Buff_CarriedCharacterGivingLifeToDesmodus");

	ABuff_CarriedCharacterGivingLifeToDesmodus_C_ExecuteUbergraph_Buff_CarriedCharacterGivingLifeToDesmodus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
