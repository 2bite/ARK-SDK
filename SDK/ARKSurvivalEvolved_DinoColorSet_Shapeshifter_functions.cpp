// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Shapeshifter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Shapeshifter.DinoColorSet_Shapeshifter_C.ExecuteUbergraph_DinoColorSet_Shapeshifter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Shapeshifter_C::ExecuteUbergraph_DinoColorSet_Shapeshifter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Shapeshifter.DinoColorSet_Shapeshifter_C.ExecuteUbergraph_DinoColorSet_Shapeshifter");

	UDinoColorSet_Shapeshifter_C_ExecuteUbergraph_DinoColorSet_Shapeshifter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
