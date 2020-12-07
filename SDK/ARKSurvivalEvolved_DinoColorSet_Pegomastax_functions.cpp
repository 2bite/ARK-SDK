// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Pegomastax_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Pegomastax.DinoColorSet_Pegomastax_C.ExecuteUbergraph_DinoColorSet_Pegomastax
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Pegomastax_C::ExecuteUbergraph_DinoColorSet_Pegomastax(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Pegomastax.DinoColorSet_Pegomastax_C.ExecuteUbergraph_DinoColorSet_Pegomastax");

	UDinoColorSet_Pegomastax_C_ExecuteUbergraph_DinoColorSet_Pegomastax_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
