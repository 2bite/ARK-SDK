// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LanternPug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_LanternPug.DinoColorSet_LanternPug_C.ExecuteUbergraph_DinoColorSet_LanternPug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_LanternPug_C::ExecuteUbergraph_DinoColorSet_LanternPug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_LanternPug.DinoColorSet_LanternPug_C.ExecuteUbergraph_DinoColorSet_LanternPug");

	UDinoColorSet_LanternPug_C_ExecuteUbergraph_DinoColorSet_LanternPug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
