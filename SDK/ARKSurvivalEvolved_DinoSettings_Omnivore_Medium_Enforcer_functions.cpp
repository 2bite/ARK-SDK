// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_Enforcer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Omnivore_Medium_Enforcer.DinoSettings_Omnivore_Medium_Enforcer_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Omnivore_Medium_Enforcer_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_Enforcer.DinoSettings_Omnivore_Medium_Enforcer_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer");

	UDinoSettings_Omnivore_Medium_Enforcer_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
