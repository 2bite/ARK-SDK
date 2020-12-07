// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaryonyxAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaryonyxAnimBlueprint.BaryonyxAnimBlueprint_C.ExecuteUbergraph_BaryonyxAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBaryonyxAnimBlueprint_C::ExecuteUbergraph_BaryonyxAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaryonyxAnimBlueprint.BaryonyxAnimBlueprint_C.ExecuteUbergraph_BaryonyxAnimBlueprint");

	UBaryonyxAnimBlueprint_C_ExecuteUbergraph_BaryonyxAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
