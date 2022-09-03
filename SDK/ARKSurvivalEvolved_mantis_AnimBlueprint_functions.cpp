// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_mantis_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mantis_AnimBlueprint.Mantis_AnimBlueprint_C.ExecuteUbergraph_Mantis_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMantis_AnimBlueprint_C::ExecuteUbergraph_Mantis_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mantis_AnimBlueprint.Mantis_AnimBlueprint_C.ExecuteUbergraph_Mantis_AnimBlueprint");

	UMantis_AnimBlueprint_C_ExecuteUbergraph_Mantis_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
