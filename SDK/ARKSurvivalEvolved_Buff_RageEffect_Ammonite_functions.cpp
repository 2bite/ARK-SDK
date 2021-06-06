// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_Ammonite_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RageEffect_Ammonite.Buff_RageEffect_Ammonite_C.UserConstructionScript
// ()

void ABuff_RageEffect_Ammonite_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect_Ammonite.Buff_RageEffect_Ammonite_C.UserConstructionScript");

	ABuff_RageEffect_Ammonite_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RageEffect_Ammonite.Buff_RageEffect_Ammonite_C.ExecuteUbergraph_Buff_RageEffect_Ammonite
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RageEffect_Ammonite_C::ExecuteUbergraph_Buff_RageEffect_Ammonite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect_Ammonite.Buff_RageEffect_Ammonite_C.ExecuteUbergraph_Buff_RageEffect_Ammonite");

	ABuff_RageEffect_Ammonite_C_ExecuteUbergraph_Buff_RageEffect_Ammonite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
