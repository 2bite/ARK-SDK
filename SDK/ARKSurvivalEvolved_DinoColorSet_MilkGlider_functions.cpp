// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_MilkGlider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_MilkGlider.DinoColorSet_MilkGlider_C.ExecuteUbergraph_DinoColorSet_MilkGlider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_MilkGlider_C::ExecuteUbergraph_DinoColorSet_MilkGlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_MilkGlider.DinoColorSet_MilkGlider_C.ExecuteUbergraph_DinoColorSet_MilkGlider");

	UDinoColorSet_MilkGlider_C_ExecuteUbergraph_DinoColorSet_MilkGlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
