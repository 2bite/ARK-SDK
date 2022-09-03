// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Dolphin_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Dolphin_Ocean.DinoColorSet_Dolphin_Ocean_C.ExecuteUbergraph_DinoColorSet_Dolphin_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Dolphin_Ocean_C::ExecuteUbergraph_DinoColorSet_Dolphin_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Dolphin_Ocean.DinoColorSet_Dolphin_Ocean_C.ExecuteUbergraph_DinoColorSet_Dolphin_Ocean");

	UDinoColorSet_Dolphin_Ocean_C_ExecuteUbergraph_DinoColorSet_Dolphin_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
