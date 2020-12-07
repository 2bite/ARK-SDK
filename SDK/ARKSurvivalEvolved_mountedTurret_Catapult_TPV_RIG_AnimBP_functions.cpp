// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_mountedTurret_Catapult_TPV_RIG_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mountedTurret_Catapult_TPV_RIG_AnimBP.mountedTurret_Catapult_TPV_RIG_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UmountedTurret_Catapult_TPV_RIG_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function mountedTurret_Catapult_TPV_RIG_AnimBP.mountedTurret_Catapult_TPV_RIG_AnimBP_C.BlueprintUpdateAnimation");

	UmountedTurret_Catapult_TPV_RIG_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mountedTurret_Catapult_TPV_RIG_AnimBP.mountedTurret_Catapult_TPV_RIG_AnimBP_C.ExecuteUbergraph_mountedTurret_Catapult_TPV_RIG_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UmountedTurret_Catapult_TPV_RIG_AnimBP_C::ExecuteUbergraph_mountedTurret_Catapult_TPV_RIG_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mountedTurret_Catapult_TPV_RIG_AnimBP.mountedTurret_Catapult_TPV_RIG_AnimBP_C.ExecuteUbergraph_mountedTurret_Catapult_TPV_RIG_AnimBP");

	UmountedTurret_Catapult_TPV_RIG_AnimBP_C_ExecuteUbergraph_mountedTurret_Catapult_TPV_RIG_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
