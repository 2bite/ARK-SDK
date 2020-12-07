// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaijuAttackStateIceBreath_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.OnEndEvent
// ()

void UIceKaijuAttackStateIceBreath_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.OnEndEvent");

	UIceKaijuAttackStateIceBreath_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.ExecuteUbergraph_IceKaijuAttackStateIceBreath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaijuAttackStateIceBreath_C::ExecuteUbergraph_IceKaijuAttackStateIceBreath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.ExecuteUbergraph_IceKaijuAttackStateIceBreath");

	UIceKaijuAttackStateIceBreath_C_ExecuteUbergraph_IceKaijuAttackStateIceBreath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
