// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_AlphaMega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_AlphaMega.DinoColorSet_AlphaMega_C.ExecuteUbergraph_DinoColorSet_AlphaMega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_AlphaMega_C::ExecuteUbergraph_DinoColorSet_AlphaMega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_AlphaMega.DinoColorSet_AlphaMega_C.ExecuteUbergraph_DinoColorSet_AlphaMega");

	UDinoColorSet_AlphaMega_C_ExecuteUbergraph_DinoColorSet_AlphaMega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
