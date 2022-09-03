// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousPlant_Biolum_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonousPlant_Biolum.Buff_PoisonousPlant_Biolum_C.UserConstructionScript
// ()

void ABuff_PoisonousPlant_Biolum_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousPlant_Biolum.Buff_PoisonousPlant_Biolum_C.UserConstructionScript");

	ABuff_PoisonousPlant_Biolum_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonousPlant_Biolum.Buff_PoisonousPlant_Biolum_C.ExecuteUbergraph_Buff_PoisonousPlant_Biolum
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonousPlant_Biolum_C::ExecuteUbergraph_Buff_PoisonousPlant_Biolum(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousPlant_Biolum.Buff_PoisonousPlant_Biolum_C.ExecuteUbergraph_Buff_PoisonousPlant_Biolum");

	ABuff_PoisonousPlant_Biolum_C_ExecuteUbergraph_Buff_PoisonousPlant_Biolum_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
