// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Troodon_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Troodon_AnimBlueprint.Troodon_AnimBlueprint_C.ExecuteUbergraph_Troodon_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTroodon_AnimBlueprint_C::ExecuteUbergraph_Troodon_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_AnimBlueprint.Troodon_AnimBlueprint_C.ExecuteUbergraph_Troodon_AnimBlueprint");

	UTroodon_AnimBlueprint_C_ExecuteUbergraph_Troodon_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
