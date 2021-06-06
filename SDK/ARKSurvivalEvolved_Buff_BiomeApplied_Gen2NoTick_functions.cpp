// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BiomeApplied_Gen2NoTick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.UserConstructionScript
// ()

void ABuff_BiomeApplied_Gen2NoTick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.UserConstructionScript");

	ABuff_BiomeApplied_Gen2NoTick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BiomeApplied_Gen2NoTick_C::ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C.ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick");

	ABuff_BiomeApplied_Gen2NoTick_C_ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
