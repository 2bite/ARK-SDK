// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_metalTurret_Minigun_RIG_TPV_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UmetalTurret_Minigun_RIG_TPV_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.BlueprintUpdateAnimation");

	UmetalTurret_Minigun_RIG_TPV_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UmetalTurret_Minigun_RIG_TPV_AnimBP_C::ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C.ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP");

	UmetalTurret_Minigun_RIG_TPV_AnimBP_C_ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
