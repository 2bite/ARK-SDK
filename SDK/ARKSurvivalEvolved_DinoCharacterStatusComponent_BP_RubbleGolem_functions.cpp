// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_RubbleGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_RubbleGolem.DinoCharacterStatusComponent_BP_RubbleGolem_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_RubbleGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_RubbleGolem_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_RubbleGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_RubbleGolem.DinoCharacterStatusComponent_BP_RubbleGolem_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_RubbleGolem");

	UDinoCharacterStatusComponent_BP_RubbleGolem_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_RubbleGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif