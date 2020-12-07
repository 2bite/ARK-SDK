// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XenomorphPheromone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_XenomorphPheromone.Buff_XenomorphPheromone_C.UserConstructionScript
// ()

void ABuff_XenomorphPheromone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphPheromone.Buff_XenomorphPheromone_C.UserConstructionScript");

	ABuff_XenomorphPheromone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XenomorphPheromone.Buff_XenomorphPheromone_C.ExecuteUbergraph_Buff_XenomorphPheromone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_XenomorphPheromone_C::ExecuteUbergraph_Buff_XenomorphPheromone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphPheromone.Buff_XenomorphPheromone_C.ExecuteUbergraph_Buff_XenomorphPheromone");

	ABuff_XenomorphPheromone_C_ExecuteUbergraph_Buff_XenomorphPheromone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
