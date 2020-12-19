// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_IceJumper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_IceJumper.DinoCharacterStatusComponent_BP_IceJumper_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_IceJumper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_IceJumper_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_IceJumper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_IceJumper.DinoCharacterStatusComponent_BP_IceJumper_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_IceJumper");

	UDinoCharacterStatusComponent_BP_IceJumper_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_IceJumper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
