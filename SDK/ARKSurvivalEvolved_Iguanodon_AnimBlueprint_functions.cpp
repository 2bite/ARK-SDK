// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Iguanodon_AnimBlueprint.Iguanodon_AnimBlueprint_C.ExecuteUbergraph_Iguanodon_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIguanodon_AnimBlueprint_C::ExecuteUbergraph_Iguanodon_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_AnimBlueprint.Iguanodon_AnimBlueprint_C.ExecuteUbergraph_Iguanodon_AnimBlueprint");

	UIguanodon_AnimBlueprint_C_ExecuteUbergraph_Iguanodon_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
