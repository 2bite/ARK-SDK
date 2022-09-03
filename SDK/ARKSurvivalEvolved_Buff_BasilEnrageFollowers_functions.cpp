// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BasilEnrageFollowers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BasilEnrageFollowers.Buff_BasilEnrageFollowers_C.UserConstructionScript
// ()

void ABuff_BasilEnrageFollowers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BasilEnrageFollowers.Buff_BasilEnrageFollowers_C.UserConstructionScript");

	ABuff_BasilEnrageFollowers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BasilEnrageFollowers.Buff_BasilEnrageFollowers_C.ExecuteUbergraph_Buff_BasilEnrageFollowers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BasilEnrageFollowers_C::ExecuteUbergraph_Buff_BasilEnrageFollowers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BasilEnrageFollowers.Buff_BasilEnrageFollowers_C.ExecuteUbergraph_Buff_BasilEnrageFollowers");

	ABuff_BasilEnrageFollowers_C_ExecuteUbergraph_Buff_BasilEnrageFollowers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
