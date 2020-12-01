// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HandcuffsWeaponAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HandcuffsWeaponAnimBP.HandcuffsWeaponAnimBP_C.ExecuteUbergraph_HandcuffsWeaponAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHandcuffsWeaponAnimBP_C::ExecuteUbergraph_HandcuffsWeaponAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HandcuffsWeaponAnimBP.HandcuffsWeaponAnimBP_C.ExecuteUbergraph_HandcuffsWeaponAnimBP");

	UHandcuffsWeaponAnimBP_C_ExecuteUbergraph_HandcuffsWeaponAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
