// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_SnowballProj_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.UserConstructionScript
// ()

void AIceJumper_SnowballProj_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.UserConstructionScript");

	AIceJumper_SnowballProj_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.ExecuteUbergraph_IceJumper_SnowballProj
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_SnowballProj_C::ExecuteUbergraph_IceJumper_SnowballProj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.ExecuteUbergraph_IceJumper_SnowballProj");

	AIceJumper_SnowballProj_C_ExecuteUbergraph_IceJumper_SnowballProj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
