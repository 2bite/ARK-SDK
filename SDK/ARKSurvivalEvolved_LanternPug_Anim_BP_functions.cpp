// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternPug_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternPug_Anim_BP.LanternPug_Anim_BP_C.ExecuteUbergraph_LanternPug_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULanternPug_Anim_BP_C::ExecuteUbergraph_LanternPug_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Anim_BP.LanternPug_Anim_BP_C.ExecuteUbergraph_LanternPug_Anim_BP");

	ULanternPug_Anim_BP_C_ExecuteUbergraph_LanternPug_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
