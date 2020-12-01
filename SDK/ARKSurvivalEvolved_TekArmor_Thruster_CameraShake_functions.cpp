// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekArmor_Thruster_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekArmor_Thruster_CameraShake.TekArmor_Thruster_CameraShake_C.ExecuteUbergraph_TekArmor_Thruster_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTekArmor_Thruster_CameraShake_C::ExecuteUbergraph_TekArmor_Thruster_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_Thruster_CameraShake.TekArmor_Thruster_CameraShake_C.ExecuteUbergraph_TekArmor_Thruster_CameraShake");

	UTekArmor_Thruster_CameraShake_C_ExecuteUbergraph_TekArmor_Thruster_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
