// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Kairuku_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Kairuku.DinoCharacterStatusComponent_BP_Kairuku_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Kairuku
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Kairuku_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Kairuku(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Kairuku.DinoCharacterStatusComponent_BP_Kairuku_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Kairuku");

	UDinoCharacterStatusComponent_BP_Kairuku_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Kairuku_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
