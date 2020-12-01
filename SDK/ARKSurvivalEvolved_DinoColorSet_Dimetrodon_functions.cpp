// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Dimetrodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Dimetrodon.DinoColorSet_Dimetrodon_C.ExecuteUbergraph_DinoColorSet_Dimetrodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Dimetrodon_C::ExecuteUbergraph_DinoColorSet_Dimetrodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Dimetrodon.DinoColorSet_Dimetrodon_C.ExecuteUbergraph_DinoColorSet_Dimetrodon");

	UDinoColorSet_Dimetrodon_C_ExecuteUbergraph_DinoColorSet_Dimetrodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
