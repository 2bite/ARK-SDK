// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bee_Queen_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bee_Queen_AnimBlueprint.Bee_Queen_AnimBlueprint_C.ExecuteUbergraph_Bee_Queen_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBee_Queen_AnimBlueprint_C::ExecuteUbergraph_Bee_Queen_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_AnimBlueprint.Bee_Queen_AnimBlueprint_C.ExecuteUbergraph_Bee_Queen_AnimBlueprint");

	UBee_Queen_AnimBlueprint_C_ExecuteUbergraph_Bee_Queen_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
