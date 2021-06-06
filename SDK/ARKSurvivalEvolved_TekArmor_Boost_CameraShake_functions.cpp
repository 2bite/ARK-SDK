// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekArmor_Boost_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekArmor_Boost_CameraShake.TekArmor_Boost_CameraShake_C.ExecuteUbergraph_TekArmor_Boost_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTekArmor_Boost_CameraShake_C::ExecuteUbergraph_TekArmor_Boost_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_Boost_CameraShake.TekArmor_Boost_CameraShake_C.ExecuteUbergraph_TekArmor_Boost_CameraShake");

	UTekArmor_Boost_CameraShake_C_ExecuteUbergraph_TekArmor_Boost_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
