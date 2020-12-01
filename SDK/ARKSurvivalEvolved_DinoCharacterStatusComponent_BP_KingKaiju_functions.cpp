// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_KingKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_KingKaiju.DinoCharacterStatusComponent_BP_KingKaiju_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_KingKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_KingKaiju_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_KingKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_KingKaiju.DinoCharacterStatusComponent_BP_KingKaiju_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_KingKaiju");

	UDinoCharacterStatusComponent_BP_KingKaiju_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_KingKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
