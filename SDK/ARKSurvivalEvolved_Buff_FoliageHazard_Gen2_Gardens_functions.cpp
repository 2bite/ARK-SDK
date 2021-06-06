// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FoliageHazard_Gen2_Gardens_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.UserConstructionScript
// ()

void ABuff_FoliageHazard_Gen2_Gardens_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.UserConstructionScript");

	ABuff_FoliageHazard_Gen2_Gardens_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FoliageHazard_Gen2_Gardens_C::ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C.ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens");

	ABuff_FoliageHazard_Gen2_Gardens_C_ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
