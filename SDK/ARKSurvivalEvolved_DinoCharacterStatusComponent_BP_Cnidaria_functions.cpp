// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Cnidaria_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Cnidaria.DinoCharacterStatusComponent_BP_Cnidaria_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Cnidaria
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Cnidaria_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Cnidaria(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Cnidaria.DinoCharacterStatusComponent_BP_Cnidaria_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Cnidaria");

	UDinoCharacterStatusComponent_BP_Cnidaria_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Cnidaria_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
