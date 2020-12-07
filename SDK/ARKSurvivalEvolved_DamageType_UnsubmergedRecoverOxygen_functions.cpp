// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DamageType_UnsubmergedRecoverOxygen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C.ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDamageType_UnsubmergedRecoverOxygen_C::ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C.ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen");

	UDamageType_UnsubmergedRecoverOxygen_C_ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
