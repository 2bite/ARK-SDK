// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dodo_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodo_AnimBlueprint.Dodo_AnimBlueprint_C.ExecuteUbergraph_Dodo_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDodo_AnimBlueprint_C::ExecuteUbergraph_Dodo_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_AnimBlueprint.Dodo_AnimBlueprint_C.ExecuteUbergraph_Dodo_AnimBlueprint");

	UDodo_AnimBlueprint_C_ExecuteUbergraph_Dodo_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
