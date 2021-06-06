// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_TekStrider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_TekStrider.DinoColorSet_TekStrider_C.ExecuteUbergraph_DinoColorSet_TekStrider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_TekStrider_C::ExecuteUbergraph_DinoColorSet_TekStrider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_TekStrider.DinoColorSet_TekStrider_C.ExecuteUbergraph_DinoColorSet_TekStrider");

	UDinoColorSet_TekStrider_C_ExecuteUbergraph_DinoColorSet_TekStrider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
