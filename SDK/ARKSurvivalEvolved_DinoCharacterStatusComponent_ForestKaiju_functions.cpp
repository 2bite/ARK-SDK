// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_ForestKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_ForestKaiju.DinoCharacterStatusComponent_ForestKaiju_C.ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_ForestKaiju_C::ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_ForestKaiju.DinoCharacterStatusComponent_ForestKaiju_C.ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju");

	UDinoCharacterStatusComponent_ForestKaiju_C_ExecuteUbergraph_DinoCharacterStatusComponent_ForestKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
