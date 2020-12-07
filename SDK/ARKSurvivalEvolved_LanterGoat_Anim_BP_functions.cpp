// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanterGoat_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanterGoat_Anim_BP.LanterGoat_Anim_BP_C.ExecuteUbergraph_LanterGoat_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULanterGoat_Anim_BP_C::ExecuteUbergraph_LanterGoat_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanterGoat_Anim_BP.LanterGoat_Anim_BP_C.ExecuteUbergraph_LanterGoat_Anim_BP");

	ULanterGoat_Anim_BP_C_ExecuteUbergraph_LanterGoat_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
