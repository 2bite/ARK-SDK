// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_TerrorBird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_TerrorBird.DinoCharacterStatusComponent_BP_TerrorBird_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_TerrorBird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_TerrorBird_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_TerrorBird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_TerrorBird.DinoCharacterStatusComponent_BP_TerrorBird_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_TerrorBird");

	UDinoCharacterStatusComponent_BP_TerrorBird_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_TerrorBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
