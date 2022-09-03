// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterSplashEmitter_Ichthyornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.UserConstructionScript
// ()

void AWaterSplashEmitter_Ichthyornis_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.UserConstructionScript");

	AWaterSplashEmitter_Ichthyornis_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.ExecuteUbergraph_WaterSplashEmitter_Ichthyornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterSplashEmitter_Ichthyornis_C::ExecuteUbergraph_WaterSplashEmitter_Ichthyornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C.ExecuteUbergraph_WaterSplashEmitter_Ichthyornis");

	AWaterSplashEmitter_Ichthyornis_C_ExecuteUbergraph_WaterSplashEmitter_Ichthyornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
