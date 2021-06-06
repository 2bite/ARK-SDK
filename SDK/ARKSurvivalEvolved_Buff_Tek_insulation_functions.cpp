// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Tek_insulation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Tek_insulation.Buff_Tek_insulation_C.UserConstructionScript
// ()

void ABuff_Tek_insulation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Tek_insulation.Buff_Tek_insulation_C.UserConstructionScript");

	ABuff_Tek_insulation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Tek_insulation.Buff_Tek_insulation_C.ExecuteUbergraph_Buff_Tek_insulation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Tek_insulation_C::ExecuteUbergraph_Buff_Tek_insulation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Tek_insulation.Buff_Tek_insulation_C.ExecuteUbergraph_Buff_Tek_insulation");

	ABuff_Tek_insulation_C_ExecuteUbergraph_Buff_Tek_insulation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
