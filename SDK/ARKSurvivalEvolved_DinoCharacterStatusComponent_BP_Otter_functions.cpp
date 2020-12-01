// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Otter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Otter.DinoCharacterStatusComponent_BP_Otter_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Otter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Otter_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Otter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Otter.DinoCharacterStatusComponent_BP_Otter_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Otter");

	UDinoCharacterStatusComponent_BP_Otter_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Otter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
