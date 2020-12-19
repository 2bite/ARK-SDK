// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_SpaceWhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_SpaceWhale.DinoCharacterStatusComponent_BP_SpaceWhale_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_SpaceWhale_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_SpaceWhale.DinoCharacterStatusComponent_BP_SpaceWhale_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale");

	UDinoCharacterStatusComponent_BP_SpaceWhale_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
