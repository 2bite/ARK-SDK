// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_PolarBear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_PolarBear.DinoColorSet_PolarBear_C.ExecuteUbergraph_DinoColorSet_PolarBear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_PolarBear_C::ExecuteUbergraph_DinoColorSet_PolarBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_PolarBear.DinoColorSet_PolarBear_C.ExecuteUbergraph_DinoColorSet_PolarBear");

	UDinoColorSet_PolarBear_C_ExecuteUbergraph_DinoColorSet_PolarBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
