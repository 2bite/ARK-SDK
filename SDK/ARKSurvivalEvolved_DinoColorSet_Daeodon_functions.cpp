// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Daeodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Daeodon.DinoColorSet_Daeodon_C.ExecuteUbergraph_DinoColorSet_Daeodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Daeodon_C::ExecuteUbergraph_DinoColorSet_Daeodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Daeodon.DinoColorSet_Daeodon_C.ExecuteUbergraph_DinoColorSet_Daeodon");

	UDinoColorSet_Daeodon_C_ExecuteUbergraph_DinoColorSet_Daeodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
