// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TentacleGrabFX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TentacleGrabFX.TentacleGrabFX_C.UserConstructionScript
// ()

void ATentacleGrabFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TentacleGrabFX.TentacleGrabFX_C.UserConstructionScript");

	ATentacleGrabFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TentacleGrabFX.TentacleGrabFX_C.ReceiveBeginPlay
// ()

void ATentacleGrabFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TentacleGrabFX.TentacleGrabFX_C.ReceiveBeginPlay");

	ATentacleGrabFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TentacleGrabFX.TentacleGrabFX_C.ExecuteUbergraph_TentacleGrabFX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATentacleGrabFX_C::ExecuteUbergraph_TentacleGrabFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TentacleGrabFX.TentacleGrabFX_C.ExecuteUbergraph_TentacleGrabFX");

	ATentacleGrabFX_C_ExecuteUbergraph_TentacleGrabFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
