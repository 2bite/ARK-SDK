// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTapEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterTapEmitter.WaterTapEmitter_C.UserConstructionScript
// ()

void AWaterTapEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTapEmitter.WaterTapEmitter_C.UserConstructionScript");

	AWaterTapEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterTapEmitter.WaterTapEmitter_C.ExecuteUbergraph_WaterTapEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterTapEmitter_C::ExecuteUbergraph_WaterTapEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTapEmitter.WaterTapEmitter_C.ExecuteUbergraph_WaterTapEmitter");

	AWaterTapEmitter_C_ExecuteUbergraph_WaterTapEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
