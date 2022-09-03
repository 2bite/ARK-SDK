// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PlantPoison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PlantPoison.Buff_PlantPoison_C.UserConstructionScript
// ()

void ABuff_PlantPoison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlantPoison.Buff_PlantPoison_C.UserConstructionScript");

	ABuff_PlantPoison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlantPoison.Buff_PlantPoison_C.ExecuteUbergraph_Buff_PlantPoison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlantPoison_C::ExecuteUbergraph_Buff_PlantPoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlantPoison.Buff_PlantPoison_C.ExecuteUbergraph_Buff_PlantPoison");

	ABuff_PlantPoison_C_ExecuteUbergraph_Buff_PlantPoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
