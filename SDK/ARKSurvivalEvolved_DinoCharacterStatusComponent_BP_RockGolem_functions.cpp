// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_RockGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_RockGolem.DinoCharacterStatusComponent_BP_RockGolem_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_RockGolem_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_RockGolem.DinoCharacterStatusComponent_BP_RockGolem_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockGolem");

	UDinoCharacterStatusComponent_BP_RockGolem_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
