// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PiranhaAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PiranhaAnimBlueprint.PiranhaAnimBlueprint_C.ExecuteUbergraph_PiranhaAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPiranhaAnimBlueprint_C::ExecuteUbergraph_PiranhaAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PiranhaAnimBlueprint.PiranhaAnimBlueprint_C.ExecuteUbergraph_PiranhaAnimBlueprint");

	UPiranhaAnimBlueprint_C_ExecuteUbergraph_PiranhaAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
