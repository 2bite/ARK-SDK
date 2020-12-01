// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_BoneStego_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_BoneStego.DinoCharacterStatusComponent_BP_BoneStego_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneStego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_BoneStego_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneStego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_BoneStego.DinoCharacterStatusComponent_BP_BoneStego_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneStego");

	UDinoCharacterStatusComponent_BP_BoneStego_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_BoneStego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
