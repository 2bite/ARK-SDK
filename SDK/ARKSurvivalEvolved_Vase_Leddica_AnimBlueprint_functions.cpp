// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Vase_Leddica_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vase_Leddica_AnimBlueprint.Vase_Leddica_AnimBlueprint_C.ExecuteUbergraph_Vase_Leddica_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVase_Leddica_AnimBlueprint_C::ExecuteUbergraph_Vase_Leddica_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vase_Leddica_AnimBlueprint.Vase_Leddica_AnimBlueprint_C.ExecuteUbergraph_Vase_Leddica_AnimBlueprint");

	UVase_Leddica_AnimBlueprint_C_ExecuteUbergraph_Vase_Leddica_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
