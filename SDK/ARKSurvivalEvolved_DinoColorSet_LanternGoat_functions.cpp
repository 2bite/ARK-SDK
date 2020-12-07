// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LanternGoat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_LanternGoat.DinoColorSet_LanternGoat_C.ExecuteUbergraph_DinoColorSet_LanternGoat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_LanternGoat_C::ExecuteUbergraph_DinoColorSet_LanternGoat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_LanternGoat.DinoColorSet_LanternGoat_C.ExecuteUbergraph_DinoColorSet_LanternGoat");

	UDinoColorSet_LanternGoat_C_ExecuteUbergraph_DinoColorSet_LanternGoat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
