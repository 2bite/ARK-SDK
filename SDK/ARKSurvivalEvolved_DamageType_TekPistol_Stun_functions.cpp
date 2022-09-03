// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DamageType_TekPistol_Stun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DamageType_TekPistol_Stun.DamageType_TekPistol_Stun_C.ExecuteUbergraph_DamageType_TekPistol_Stun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDamageType_TekPistol_Stun_C::ExecuteUbergraph_DamageType_TekPistol_Stun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageType_TekPistol_Stun.DamageType_TekPistol_Stun_C.ExecuteUbergraph_DamageType_TekPistol_Stun");

	UDamageType_TekPistol_Stun_C_ExecuteUbergraph_DamageType_TekPistol_Stun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
