// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Sheep_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Sheep.DinoCharacterStatusComponent_BP_Sheep_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sheep
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Sheep_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sheep(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Sheep.DinoCharacterStatusComponent_BP_Sheep_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sheep");

	UDinoCharacterStatusComponent_BP_Sheep_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sheep_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
