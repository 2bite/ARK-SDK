// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mega_DinoCharacterStatusComponent_BP_Tuso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mega_DinoCharacterStatusComponent_BP_Tuso.Mega_DinoCharacterStatusComponent_BP_Tuso_C.ExecuteUbergraph_Mega_DinoCharacterStatusComponent_BP_Tuso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMega_DinoCharacterStatusComponent_BP_Tuso_C::ExecuteUbergraph_Mega_DinoCharacterStatusComponent_BP_Tuso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mega_DinoCharacterStatusComponent_BP_Tuso.Mega_DinoCharacterStatusComponent_BP_Tuso_C.ExecuteUbergraph_Mega_DinoCharacterStatusComponent_BP_Tuso");

	UMega_DinoCharacterStatusComponent_BP_Tuso_C_ExecuteUbergraph_Mega_DinoCharacterStatusComponent_BP_Tuso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
