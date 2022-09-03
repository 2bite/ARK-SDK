// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterSplashEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterSplashEmitter.WaterSplashEmitter_C.UserConstructionScript
// ()

void AWaterSplashEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSplashEmitter.WaterSplashEmitter_C.UserConstructionScript");

	AWaterSplashEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSplashEmitter.WaterSplashEmitter_C.ExecuteUbergraph_WaterSplashEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterSplashEmitter_C::ExecuteUbergraph_WaterSplashEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSplashEmitter.WaterSplashEmitter_C.ExecuteUbergraph_WaterSplashEmitter");

	AWaterSplashEmitter_C_ExecuteUbergraph_WaterSplashEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
