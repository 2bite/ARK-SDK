// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Salmon_Anim_BP.Salmon_Anim_BP_C.ExecuteUbergraph_Salmon_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USalmon_Anim_BP_C::ExecuteUbergraph_Salmon_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Anim_BP.Salmon_Anim_BP_C.ExecuteUbergraph_Salmon_Anim_BP");

	USalmon_Anim_BP_C_ExecuteUbergraph_Salmon_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
