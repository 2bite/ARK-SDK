// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FreezeImmunity_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FreezeImmunity.Buff_FreezeImmunity_C.UserConstructionScript
// ()

void ABuff_FreezeImmunity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FreezeImmunity.Buff_FreezeImmunity_C.UserConstructionScript");

	ABuff_FreezeImmunity_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FreezeImmunity.Buff_FreezeImmunity_C.ExecuteUbergraph_Buff_FreezeImmunity
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FreezeImmunity_C::ExecuteUbergraph_Buff_FreezeImmunity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FreezeImmunity.Buff_FreezeImmunity_C.ExecuteUbergraph_Buff_FreezeImmunity");

	ABuff_FreezeImmunity_C_ExecuteUbergraph_Buff_FreezeImmunity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
