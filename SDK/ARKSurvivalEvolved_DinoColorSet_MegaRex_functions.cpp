// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_MegaRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_MegaRex.DinoColorSet_MegaRex_C.ExecuteUbergraph_DinoColorSet_MegaRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_MegaRex_C::ExecuteUbergraph_DinoColorSet_MegaRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_MegaRex.DinoColorSet_MegaRex_C.ExecuteUbergraph_DinoColorSet_MegaRex");

	UDinoColorSet_MegaRex_C_ExecuteUbergraph_DinoColorSet_MegaRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
