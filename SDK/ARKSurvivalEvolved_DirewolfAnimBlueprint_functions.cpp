// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DirewolfAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DirewolfAnimBlueprint.DirewolfAnimBlueprint_C.ExecuteUbergraph_DirewolfAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDirewolfAnimBlueprint_C::ExecuteUbergraph_DirewolfAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirewolfAnimBlueprint.DirewolfAnimBlueprint_C.ExecuteUbergraph_DirewolfAnimBlueprint");

	UDirewolfAnimBlueprint_C_ExecuteUbergraph_DirewolfAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
