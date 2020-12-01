// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Glowstick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Glowstick.EngramEntry_Glowstick_C.ExecuteUbergraph_EngramEntry_GlowStick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Glowstick_C::ExecuteUbergraph_EngramEntry_GlowStick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Glowstick.EngramEntry_Glowstick_C.ExecuteUbergraph_EngramEntry_GlowStick");

	UEngramEntry_Glowstick_C_ExecuteUbergraph_EngramEntry_GlowStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
