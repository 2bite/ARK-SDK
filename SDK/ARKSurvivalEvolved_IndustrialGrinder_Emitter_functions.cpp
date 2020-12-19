// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IndustrialGrinder_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndustrialGrinder_Emitter.IndustrialGrinder_Emitter_C.UserConstructionScript
// ()

void AIndustrialGrinder_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialGrinder_Emitter.IndustrialGrinder_Emitter_C.UserConstructionScript");

	AIndustrialGrinder_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IndustrialGrinder_Emitter.IndustrialGrinder_Emitter_C.ExecuteUbergraph_IndustrialGrinder_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIndustrialGrinder_Emitter_C::ExecuteUbergraph_IndustrialGrinder_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialGrinder_Emitter.IndustrialGrinder_Emitter_C.ExecuteUbergraph_IndustrialGrinder_Emitter");

	AIndustrialGrinder_Emitter_C_ExecuteUbergraph_IndustrialGrinder_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
