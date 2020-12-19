// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ammonite_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammonite_AnimBlueprint.Ammonite_AnimBlueprint_C.ExecuteUbergraph_Ammonite_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAmmonite_AnimBlueprint_C::ExecuteUbergraph_Ammonite_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_AnimBlueprint.Ammonite_AnimBlueprint_C.ExecuteUbergraph_Ammonite_AnimBlueprint");

	UAmmonite_AnimBlueprint_C_ExecuteUbergraph_Ammonite_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
