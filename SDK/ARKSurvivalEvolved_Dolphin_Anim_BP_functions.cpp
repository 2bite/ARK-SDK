// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dolphin_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dolphin_Anim_BP.Dolphin_Anim_BP_C.ExecuteUbergraph_Dolphin_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDolphin_Anim_BP_C::ExecuteUbergraph_Dolphin_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dolphin_Anim_BP.Dolphin_Anim_BP_C.ExecuteUbergraph_Dolphin_Anim_BP");

	UDolphin_Anim_BP_C_ExecuteUbergraph_Dolphin_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
