// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Ant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Ant.DinoCharacterStatusComponent_BP_Ant_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Ant_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Ant.DinoCharacterStatusComponent_BP_Ant_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ant");

	UDinoCharacterStatusComponent_BP_Ant_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
