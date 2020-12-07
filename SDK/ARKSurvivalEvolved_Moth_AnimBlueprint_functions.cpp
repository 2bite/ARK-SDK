// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moth_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Moth_AnimBlueprint.Moth_AnimBlueprint_C.ExecuteUbergraph_Moth_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMoth_AnimBlueprint_C::ExecuteUbergraph_Moth_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_AnimBlueprint.Moth_AnimBlueprint_C.ExecuteUbergraph_Moth_AnimBlueprint");

	UMoth_AnimBlueprint_C_ExecuteUbergraph_Moth_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
