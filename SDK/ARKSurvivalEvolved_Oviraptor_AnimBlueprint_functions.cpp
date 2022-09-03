// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Oviraptor_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Oviraptor_AnimBlueprint.Oviraptor_AnimBlueprint_C.ExecuteUbergraph_Oviraptor_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOviraptor_AnimBlueprint_C::ExecuteUbergraph_Oviraptor_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_AnimBlueprint.Oviraptor_AnimBlueprint_C.ExecuteUbergraph_Oviraptor_AnimBlueprint");

	UOviraptor_AnimBlueprint_C_ExecuteUbergraph_Oviraptor_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
