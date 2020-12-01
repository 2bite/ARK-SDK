// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EquusAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EquusAnimBlueprint.EquusAnimBlueprint_C.ExecuteUbergraph_EquusAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEquusAnimBlueprint_C::ExecuteUbergraph_EquusAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquusAnimBlueprint.EquusAnimBlueprint_C.ExecuteUbergraph_EquusAnimBlueprint");

	UEquusAnimBlueprint_C_ExecuteUbergraph_EquusAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
