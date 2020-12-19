// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_CrystalWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_CrystalWyvern.DinoCharacterStatusComponent_BP_CrystalWyvern_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_CrystalWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_CrystalWyvern_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_CrystalWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_CrystalWyvern.DinoCharacterStatusComponent_BP_CrystalWyvern_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_CrystalWyvern");

	UDinoCharacterStatusComponent_BP_CrystalWyvern_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_CrystalWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
