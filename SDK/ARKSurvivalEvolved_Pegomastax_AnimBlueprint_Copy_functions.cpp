// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pegomastax_AnimBlueprint_Copy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pegomastax_AnimBlueprint_Copy.Pegomastax_AnimBlueprint_Copy_C.ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPegomastax_AnimBlueprint_Copy_C::ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_AnimBlueprint_Copy.Pegomastax_AnimBlueprint_Copy_C.ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy");

	UPegomastax_AnimBlueprint_Copy_C_ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
